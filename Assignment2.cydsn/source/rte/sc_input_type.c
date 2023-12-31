/*
 * Filename: sc_input_type.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * description: Signalclass
 * name: sc_input
 * shortname: input
 *
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "sc_input_type.h"



/* USER CODE START SC_INPUT_INCLUDE */
#include "stdlib.h"
/* USER CODE END SC_INPUT_INCLUDE */




/* USER CODE START SC_INPUT_USERDEFINITIONS */

/* USER CODE END SC_INPUT_USERDEFINITIONS */


/*****************************************************************************************
 *************** Port Wrapper Implementation for SC_INPUT signal  ****************
 *****************************************************************************************/
 
 

/**
 * Default IN driver API
 */
inline RC_t SC_INPUT_driverIn(SC_INPUT_data_t *const data)
{
	/* USER CODE START driverInSC_INPUT */
    
//    UART_LOG_PutString("i am in driverIn");
//    char buffer[100];
    
    static uint16_t KeyLeft_Button_3_flag = 0;
    static uint16_t KeyLeft_Button_4_flag = 0;
    
    static uint16_t tickperiod   =   0;
    
    static uint16_t tick_1min    =   0;
    static uint16_t tick_250ms   =   0;
    
    data->m_ev = EV_NONE;
    
    data->KeyLeft_Button_3_Status  = KeyLeft_Button_3_Read();
    data->KeyRight_Button_4_Status = KeyRight_Button_4_Read();
    
    if(tick_250ms == 250)
    {
        data->m_ev = EV_250MS;
        tick_250ms  =   0;
    }
    else
    {
        tick_250ms  =   tick_250ms  +   50;
    }
    
    if(tick_1min == 60000)
    {
        data->m_ev = EV_1MIN;
        tick_1min   =   0;
    }
    else
    {
        tick_1min   =   tick_1min   +   50;
    }
    
    if(data->KeyLeft_Button_3_Status == 1)
    {
        KeyLeft_Button_3_flag = 1;
    }
    if(data->KeyRight_Button_4_Status == 1)
    {
        KeyLeft_Button_4_flag = 1;
        
        tickperiod += 100;
//        itoa(tickperiod, buffer, 10);
//        UART_LOG_PutString(buffer);
//        UART_LOG_PutString("\n");
    }
    
    if(data->KeyLeft_Button_3_Status == 0 && KeyLeft_Button_3_flag == 1)
    {
        data->m_ev = EV_KEYLEFT;        
        KeyLeft_Button_3_flag = 0; 
        
//        itoa(data->m_ev, buffer, 10);
//        UART_LOG_PutString(buffer);
    }
    else if(data->KeyRight_Button_4_Status == 0 && KeyLeft_Button_4_flag == 1 && tickperiod < 1000)
    {
        data->m_ev = EV_KEYRIGHT;
        KeyLeft_Button_4_flag = 0;
        tickperiod = 0;
        
//        itoa(data->m_ev, buffer, 10);
//        UART_LOG_PutString(buffer);
    }
    else if(data->KeyRight_Button_4_Status == 0 && KeyLeft_Button_4_flag == 1 && tickperiod > 1000)
    {
        data->m_ev = EV_KEYRIGHTLONGPRESS;
        KeyLeft_Button_4_flag = 0;
        tickperiod = 0;
        
//        itoa(data->m_ev, buffer, 10);
//        UART_LOG_PutString(buffer);
    }
    
	//Read data from the MCAL driver

	//Scale it to the application type

	return RC_SUCCESS;
	/* USER CODE END driverInSC_INPUT */
}




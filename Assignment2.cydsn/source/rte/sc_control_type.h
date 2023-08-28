
/*
 * Filename: sc_control_type.h
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * Description: Signalclass
 */

#ifndef _H_DEFINE_SC_CONTROL_TYPE
#define _H_DEFINE_SC_CONTROL_TYPE

#include "project.h"
#include "global.h"
#include "rte_types.h"

/* USER CODE START SC_CONTROL_INCLUDES */
#include "clock.h"
/* USER CODE END SC_CONTROL_INCLUDES */



/**********************************************************************
 *       Type Definition for SC_CONTROL signal    
 **********************************************************************/

/* USER CODE START SC_CONTROL_USERDEFINITIONS */

/* USER CODE END SC_CONTROL_USERDEFINITIONS */

typedef 
/* USER CODE START SC_CONTROL_SIGNALDATADEFINITION */
struct
{
		CLOCK_display_t    hour;
        CLOCK_display_t    minute;
} 
/* USER CODE END SC_CONTROL_SIGNALDATADEFINITION */
SC_CONTROL_data_t;

/* USER CODE START InitSC_CONTROL */
#define SC_CONTROL_INIT_DATA ((SC_CONTROL_data_t){0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0})
/* USER CODE END InitSC_CONTROL */





/* USER CODE START SC_CONTROL_USERFUNCTIONS */

/* USER CODE END SC_CONTROL_USERFUNCTIONS */


#endif
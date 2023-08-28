# Electronic_Clock

An electronic clock that displays time in hours and minutes.

## Requirements

**NFR1**	The system will be developed based on Erika OS, using the RTE architec-ture and the Python Code Generator.
**FR1**		The behavior of the clock is shown in the State Diagram below
**FR2**		Button 1..2 will be used to control the clock.
				• Button 1 will create the event ev_KeyLeft
				• Button 2 will fire the event ev_KeyRight
			ev_KeyLeft will iterate through the various display and edit modes. ev_KeyRight will be used to increment the minute or hour widget.
**FR3**		If the right button is pressed continuously for at least 1s, the event ev_RightLongPress will be fired.
**FR4**		In display mode, the clock numbers shall be shown as white letters on a black background.
			In Editing Mode, the letters (per widget, i.e. hours OR minutes) shall be shown as black letters on white background.
**NFR2**	As the display driver blocks the system for a rather long period, the update of the TFT diplay will be done in a low priority task, which is cyclically called.
**NFR3**	To avoid race conditions, use a resource while copying the clock data to a local display object in the display task.
**NFR4**	The state machine shall be implemented using a lookup table pattern.

A Video is added for reference on how the project should work.
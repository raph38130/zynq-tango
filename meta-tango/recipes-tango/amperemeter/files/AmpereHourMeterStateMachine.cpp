/*----- PROTECTED REGION ID(AmpereHourMeterStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        AmpereHourMeterStateMachine.cpp
//
// description : State machine file for the AmpereHourMeter class
//
// project :     
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <AmpereHourMeter.h>

/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::AmpereHourMeterStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================
//  ON      |  
//  OFF     |  


namespace AmpereHourMeter_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : AmpereHourMeter::is_Current_allowed()
 *	Description : Execution allowed for Current attribute
 */
//--------------------------------------------------------
bool AmpereHourMeter::is_Current_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Check access type.
	if ( type==Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for READ 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(AmpereHourMeter::CurrentStateAllowed_READ) ENABLED START -----*/
		
		/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::CurrentStateAllowed_READ
			return false;
		}
		return true;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AmpereHourMeter::is_AmpereHour_allowed()
 *	Description : Execution allowed for AmpereHour attribute
 */
//--------------------------------------------------------
bool AmpereHourMeter::is_AmpereHour_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Check access type.
	if ( type==Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for READ 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(AmpereHourMeter::AmpereHourStateAllowed_READ) ENABLED START -----*/
		
		/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::AmpereHourStateAllowed_READ
			return false;
		}
		return true;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AmpereHourMeter::is_Interlock_allowed()
 *	Description : Execution allowed for Interlock attribute
 */
//--------------------------------------------------------
bool AmpereHourMeter::is_Interlock_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for Interlock attribute in read access.
	/*----- PROTECTED REGION ID(AmpereHourMeter::InterlockStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::InterlockStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : AmpereHourMeter::is_On_allowed()
 *	Description : Execution allowed for On attribute
 */
//--------------------------------------------------------
bool AmpereHourMeter::is_On_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::ON)
	{
	/*----- PROTECTED REGION ID(AmpereHourMeter::OnStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::OnStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AmpereHourMeter::is_Off_allowed()
 *	Description : Execution allowed for Off attribute
 */
//--------------------------------------------------------
bool AmpereHourMeter::is_Off_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::OFF)
	{
	/*----- PROTECTED REGION ID(AmpereHourMeter::OffStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::OffStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : AmpereHourMeter::is_Reset_allowed()
 *	Description : Execution allowed for Reset attribute
 */
//--------------------------------------------------------
bool AmpereHourMeter::is_Reset_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Reset command.
	/*----- PROTECTED REGION ID(AmpereHourMeter::ResetStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::ResetStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(AmpereHourMeter::AmpereHourMeterStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::AmpereHourMeterStateAllowed.AdditionalMethods

}	//	End of namespace

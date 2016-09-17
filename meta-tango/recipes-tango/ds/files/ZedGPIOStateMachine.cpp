/*----- PROTECTED REGION ID(ZedGPIOStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        ZedGPIOStateMachine.cpp
//
// description : State machine file for the ZedGPIO class
//
// project :     ZedBoard Tango Gateway
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

#include <ZedGPIO.h>

/*----- PROTECTED REGION END -----*/	//	ZedGPIO::ZedGPIOStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================
//  ON      |  
//  OFF     |  


namespace ZedGPIO_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : ZedGPIO::is_Switches_allowed()
 *	Description : Execution allowed for Switches attribute
 */
//--------------------------------------------------------
bool ZedGPIO::is_Switches_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Check access type.
	if ( type==Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for READ 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(ZedGPIO::SwitchesStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	ZedGPIO::SwitchesStateAllowed_READ
			return false;
		}
		return true;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : ZedGPIO::is_Led0_allowed()
 *	Description : Execution allowed for Led0 attribute
 */
//--------------------------------------------------------
bool ZedGPIO::is_Led0_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Check access type.
	if ( type!=Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for WRITE 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(ZedGPIO::Led0StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	ZedGPIO::Led0StateAllowed_WRITE
			return false;
		}
		return true;
	}

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : ZedGPIO::is_Led1_allowed()
 *	Description : Execution allowed for Led1 attribute
 */
//--------------------------------------------------------
bool ZedGPIO::is_Led1_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Check access type.
	if ( type!=Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for WRITE 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(ZedGPIO::Led1StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	ZedGPIO::Led1StateAllowed_WRITE
			return false;
		}
		return true;
	}

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : ZedGPIO::is_Led2_allowed()
 *	Description : Execution allowed for Led2 attribute
 */
//--------------------------------------------------------
bool ZedGPIO::is_Led2_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Check access type.
	if ( type!=Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for WRITE 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(ZedGPIO::Led2StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	ZedGPIO::Led2StateAllowed_WRITE
			return false;
		}
		return true;
	}

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : ZedGPIO::is_Led3_allowed()
 *	Description : Execution allowed for Led3 attribute
 */
//--------------------------------------------------------
bool ZedGPIO::is_Led3_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Check access type.
	if ( type!=Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for WRITE 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(ZedGPIO::Led3StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	ZedGPIO::Led3StateAllowed_WRITE
			return false;
		}
		return true;
	}

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : ZedGPIO::is_Led4_allowed()
 *	Description : Execution allowed for Led4 attribute
 */
//--------------------------------------------------------
bool ZedGPIO::is_Led4_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Check access type.
	if ( type!=Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for WRITE 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(ZedGPIO::Led4StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	ZedGPIO::Led4StateAllowed_WRITE
			return false;
		}
		return true;
	}

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : ZedGPIO::is_Led5_allowed()
 *	Description : Execution allowed for Led5 attribute
 */
//--------------------------------------------------------
bool ZedGPIO::is_Led5_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Check access type.
	if ( type!=Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for WRITE 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(ZedGPIO::Led5StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	ZedGPIO::Led5StateAllowed_WRITE
			return false;
		}
		return true;
	}

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : ZedGPIO::is_Led6_allowed()
 *	Description : Execution allowed for Led6 attribute
 */
//--------------------------------------------------------
bool ZedGPIO::is_Led6_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Check access type.
	if ( type!=Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for WRITE 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(ZedGPIO::Led6StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	ZedGPIO::Led6StateAllowed_WRITE
			return false;
		}
		return true;
	}

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : ZedGPIO::is_Led7_allowed()
 *	Description : Execution allowed for Led7 attribute
 */
//--------------------------------------------------------
bool ZedGPIO::is_Led7_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Check access type.
	if ( type!=Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for WRITE 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(ZedGPIO::Led7StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	ZedGPIO::Led7StateAllowed_WRITE
			return false;
		}
		return true;
	}

	return true;
}

//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : ZedGPIO::is_Start_allowed()
 *	Description : Execution allowed for Start attribute
 */
//--------------------------------------------------------
bool ZedGPIO::is_Start_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::ON)
	{
	/*----- PROTECTED REGION ID(ZedGPIO::StartStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	ZedGPIO::StartStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : ZedGPIO::is_Stop_allowed()
 *	Description : Execution allowed for Stop attribute
 */
//--------------------------------------------------------
bool ZedGPIO::is_Stop_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::OFF)
	{
	/*----- PROTECTED REGION ID(ZedGPIO::StopStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	ZedGPIO::StopStateAllowed
		return false;
	}
	return true;
}

}	//	End of namespace
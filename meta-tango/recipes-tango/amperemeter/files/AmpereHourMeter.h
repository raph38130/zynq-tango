/*----- PROTECTED REGION ID(AmpereHourMeter.h) ENABLED START -----*/
//=============================================================================
//
// file :        AmpereHourMeter.h
//
// description : Include file for the AmpereHourMeter class
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


#ifndef AmpereHourMeter_H
#define AmpereHourMeter_H

#include <tango.h>


/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter.h

/**
 *  AmpereHourMeter class description:
 *    - live current measure
 *    - sum
 */

namespace AmpereHourMeter_ns
{
/*----- PROTECTED REGION ID(AmpereHourMeter::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::Additional Class Declarations

class AmpereHourMeter : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(AmpereHourMeter::Data Members) ENABLED START -----*/

//	Add your own data members

/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::Data Members


//	Attribute data members
public:
	Tango::DevDouble	*attr_Current_read;
	Tango::DevDouble	*attr_AmperHour_read;

//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	AmpereHourMeter(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	AmpereHourMeter(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	AmpereHourMeter(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */
	~AmpereHourMeter() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : AmpereHourMeter::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);

/**
 *	Attribute Current related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_Current(Tango::Attribute &attr);
	virtual bool is_Current_allowed(Tango::AttReqType type);
/**
 *	Attribute AmperHour related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_AmperHour(Tango::Attribute &attr);
	virtual bool is_AmperHour_allowed(Tango::AttReqType type);


	//--------------------------------------------------------
	/**
	 *	Method      : AmpereHourMeter::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();




//	Command related methods
public:
	/**
	 *	Command On related method
	 *	Description: 
	 *
	 */
	virtual void on();
	virtual bool is_On_allowed(const CORBA::Any &any);
	/**
	 *	Command Off related method
	 *	Description: 
	 *
	 */
	virtual void off();
	virtual bool is_Off_allowed(const CORBA::Any &any);
	/**
	 *	Command Reset related method
	 *	Description: 
	 *
	 */
	virtual void reset();
	virtual bool is_Reset_allowed(const CORBA::Any &any);


	//--------------------------------------------------------
	/**
	 *	Method      : AmpereHourMeter::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(AmpereHourMeter::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes

/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::Additional Method prototypes
};

/*----- PROTECTED REGION ID(AmpereHourMeter::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	AmpereHourMeter::Additional Classes Definitions

}	//	End of namespace

#endif   //	AmpereHourMeter_H

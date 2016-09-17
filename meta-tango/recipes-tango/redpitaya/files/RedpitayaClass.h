/*----- PROTECTED REGION ID(RedpitayaClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        RedpitayaClass.h
//
// description : Include for the Redpitaya root class.
//               This class is the singleton class for
//                the Redpitaya device class.
//               It contains all properties and methods which the 
//               Redpitaya requires only once e.g. the commands.
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


#ifndef RedpitayaClass_H
#define RedpitayaClass_H

#include <tango.h>
#include <Redpitaya.h>


/*----- PROTECTED REGION END -----*/	//	RedpitayaClass.h


namespace Redpitaya_ns
{
/*----- PROTECTED REGION ID(RedpitayaClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	RedpitayaClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute Led0 class definition
class Led0Attrib: public Tango::Attr
{
public:
	Led0Attrib():Attr("Led0",
			Tango::DEV_BOOLEAN, Tango::WRITE) {};
	~Led0Attrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Redpitaya *>(dev))->write_Led0(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Redpitaya *>(dev))->is_Led0_allowed(ty);}
};

//	Attribute Led1 class definition
class Led1Attrib: public Tango::Attr
{
public:
	Led1Attrib():Attr("Led1",
			Tango::DEV_BOOLEAN, Tango::WRITE) {};
	~Led1Attrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Redpitaya *>(dev))->write_Led1(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Redpitaya *>(dev))->is_Led1_allowed(ty);}
};

//	Attribute Led2 class definition
class Led2Attrib: public Tango::Attr
{
public:
	Led2Attrib():Attr("Led2",
			Tango::DEV_BOOLEAN, Tango::WRITE) {};
	~Led2Attrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Redpitaya *>(dev))->write_Led2(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Redpitaya *>(dev))->is_Led2_allowed(ty);}
};

//	Attribute Led3 class definition
class Led3Attrib: public Tango::Attr
{
public:
	Led3Attrib():Attr("Led3",
			Tango::DEV_BOOLEAN, Tango::WRITE) {};
	~Led3Attrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Redpitaya *>(dev))->write_Led3(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Redpitaya *>(dev))->is_Led3_allowed(ty);}
};

//	Attribute Led4 class definition
class Led4Attrib: public Tango::Attr
{
public:
	Led4Attrib():Attr("Led4",
			Tango::DEV_BOOLEAN, Tango::WRITE) {};
	~Led4Attrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Redpitaya *>(dev))->write_Led4(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Redpitaya *>(dev))->is_Led4_allowed(ty);}
};

//	Attribute Led5 class definition
class Led5Attrib: public Tango::Attr
{
public:
	Led5Attrib():Attr("Led5",
			Tango::DEV_BOOLEAN, Tango::WRITE) {};
	~Led5Attrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Redpitaya *>(dev))->write_Led5(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Redpitaya *>(dev))->is_Led5_allowed(ty);}
};

//	Attribute Led6 class definition
class Led6Attrib: public Tango::Attr
{
public:
	Led6Attrib():Attr("Led6",
			Tango::DEV_BOOLEAN, Tango::WRITE) {};
	~Led6Attrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Redpitaya *>(dev))->write_Led6(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Redpitaya *>(dev))->is_Led6_allowed(ty);}
};

//	Attribute Led7 class definition
class Led7Attrib: public Tango::Attr
{
public:
	Led7Attrib():Attr("Led7",
			Tango::DEV_BOOLEAN, Tango::WRITE) {};
	~Led7Attrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Redpitaya *>(dev))->write_Led7(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Redpitaya *>(dev))->is_Led7_allowed(ty);}
};

//	Attribute Signal0 class definition
class Signal0Attrib: public Tango::SpectrumAttr
{
public:
	Signal0Attrib():SpectrumAttr("Signal0",
			Tango::DEV_DOUBLE, Tango::READ, 16384) {};
	~Signal0Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Redpitaya *>(dev))->read_Signal0(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Redpitaya *>(dev))->is_Signal0_allowed(ty);}
};

//	Attribute Signal1 class definition
class Signal1Attrib: public Tango::SpectrumAttr
{
public:
	Signal1Attrib():SpectrumAttr("Signal1",
			Tango::DEV_DOUBLE, Tango::READ, 16384) {};
	~Signal1Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Redpitaya *>(dev))->read_Signal1(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Redpitaya *>(dev))->is_Signal1_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command Decimation class definition
class DecimationClass : public Tango::Command
{
public:
	DecimationClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DecimationClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DecimationClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Redpitaya *>(dev))->is_Decimation_allowed(any);}
};


/**
 *	The RedpitayaClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  RedpitayaClass : public Tango::DeviceClass
#else
class RedpitayaClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(RedpitayaClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	RedpitayaClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static RedpitayaClass *init(const char *);
		static RedpitayaClass *instance();
		~RedpitayaClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		RedpitayaClass(string &);
		static RedpitayaClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	Redpitaya_H

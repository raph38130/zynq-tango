/*----- PROTECTED REGION ID(Redpitaya.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        Redpitaya.cpp
//
// description : C++ source for the Redpitaya class and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               Redpitaya are implemented in this file.
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


#include <Redpitaya.h>
#include <RedpitayaClass.h>


/*----- PROTECTED REGION END -----*/	//	Redpitaya.cpp

/**
 *  Redpitaya class description:
 *    
 */

//================================================================
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name  |  Method name
//================================================================
//  State         |  Inherited (no method)
//  Status        |  Inherited (no method)
//  Decimation    |  decimation
//================================================================

//================================================================
//  Attributes managed are:
//================================================================
//  Led0     |  Tango::DevBoolean	Scalar
//  Led1     |  Tango::DevBoolean	Scalar
//  Led2     |  Tango::DevBoolean	Scalar
//  Led3     |  Tango::DevBoolean	Scalar
//  Led4     |  Tango::DevBoolean	Scalar
//  Led5     |  Tango::DevBoolean	Scalar
//  Led6     |  Tango::DevBoolean	Scalar
//  Led7     |  Tango::DevBoolean	Scalar
//  Signal0  |  Tango::DevDouble	Spectrum  ( max = 16384)
//  Signal1  |  Tango::DevDouble	Spectrum  ( max = 16384)
//================================================================

namespace Redpitaya_ns
{
/*----- PROTECTED REGION ID(Redpitaya::namespace_starting) ENABLED START -----*/

//	static initializations
void write_led(rp_dpin_t n, bool val) {
	if (val) {
	   rp_DpinSetState(n, RP_HIGH);
	}
	else {
	   rp_DpinSetState(n, RP_LOW);
	}
}

/*----- PROTECTED REGION END -----*/	//	Redpitaya::namespace_starting

//--------------------------------------------------------
/**
 *	Method      : Redpitaya::Redpitaya()
 *	Description : Constructors for a Tango device
 *                implementing the classRedpitaya
 */
//--------------------------------------------------------
Redpitaya::Redpitaya(Tango::DeviceClass *cl, string &s)
 : TANGO_BASE_CLASS(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(Redpitaya::constructor_1) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::constructor_1
}
//--------------------------------------------------------
Redpitaya::Redpitaya(Tango::DeviceClass *cl, const char *s)
 : TANGO_BASE_CLASS(cl, s)
{
	/*----- PROTECTED REGION ID(Redpitaya::constructor_2) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::constructor_2
}
//--------------------------------------------------------
Redpitaya::Redpitaya(Tango::DeviceClass *cl, const char *s, const char *d)
 : TANGO_BASE_CLASS(cl, s, d)
{
	/*----- PROTECTED REGION ID(Redpitaya::constructor_3) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::constructor_3
}

//--------------------------------------------------------
/**
 *	Method      : Redpitaya::delete_device()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void Redpitaya::delete_device()
{
	DEBUG_STREAM << "Redpitaya::delete_device() " << device_name << endl;
	/*----- PROTECTED REGION ID(Redpitaya::delete_device) ENABLED START -----*/
	
	//	Delete device allocated objects
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::delete_device
	delete[] attr_Signal0_read;
	delete[] attr_Signal1_read;
}

//--------------------------------------------------------
/**
 *	Method      : Redpitaya::init_device()
 *	Description : will be called at device initialization.
 */
//--------------------------------------------------------
void Redpitaya::init_device()
{
	DEBUG_STREAM << "Redpitaya::init_device() create device " << device_name << endl;
	/*----- PROTECTED REGION ID(Redpitaya::init_device_before) ENABLED START -----*/
	
	//	Initialization before get_device_property() call
	if(rp_Init() != RP_OK){
		DEBUG_STREAM <<  "Redpitaya api init failed! "<< endl;
	}
	if(rp_app_init() != RP_OK){
		DEBUG_STREAM <<  "Redpitaya api init failed! "<< endl;
	}
	
	if(rp_set_params((float *)&t_params, PARAMS_NUM) < 0) {
		DEBUG_STREAM <<  "rp_set_params() failed!"<<endl;
	    }
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::init_device_before
	
	//	No device property to be read from database
	
	attr_Signal0_read = new Tango::DevDouble[16384];
	attr_Signal1_read = new Tango::DevDouble[16384];
	/*----- PROTECTED REGION ID(Redpitaya::init_device) ENABLED START -----*/
	
	//	Initialize device
	set_state(Tango::ON);
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::init_device
}


//--------------------------------------------------------
/**
 *	Method      : Redpitaya::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void Redpitaya::always_executed_hook()
{
	DEBUG_STREAM << "Redpitaya::always_executed_hook()  " << device_name << endl;
	/*----- PROTECTED REGION ID(Redpitaya::always_executed_hook) ENABLED START -----*/
	
	//	code always executed before all requests
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::always_executed_hook
}

//--------------------------------------------------------
/**
 *	Method      : Redpitaya::read_attr_hardware()
 *	Description : Hardware acquisition for attributes
 */
//--------------------------------------------------------
void Redpitaya::read_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "Redpitaya::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(Redpitaya::read_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	float **s;
        int sig_num, sig_len;
        int i;
        int ret_val;
        int retries = 150000;

	int size=16384;

        s = (float **)malloc(SIGNALS_NUM * sizeof(float *));
        for(i = 0; i < SIGNALS_NUM; i++) {
            s[i] = (float *)malloc(SIGNAL_LENGTH * sizeof(float));
        }

        while(retries >= 0) {
            if((ret_val = rp_get_signals(&s, &sig_num, &sig_len)) >= 0) {
                /* Signals acquired in s[][]:
                 * s[0][i] - TODO
                 * s[1][i] - Channel ADC1 raw signal
                 * s[2][i] - Channel ADC2 raw signal
                 */
		//rp remove sig_len
                for(i = 0; i < size; i++) {
                    attr_Signal0_read[i]= (int)s[1][i];
		    attr_Signal1_read[i]= (int)s[2][i];
                }
                break;
            }

            if(retries-- == 0) {
                DEBUG_STREAM <<  "Signal scquisition was not triggered!"<<endl;
                break;
            }
            usleep(1000);
        }	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::read_attr_hardware
}
//--------------------------------------------------------
/**
 *	Method      : Redpitaya::write_attr_hardware()
 *	Description : Hardware writing for attributes
 */
//--------------------------------------------------------
void Redpitaya::write_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "Redpitaya::write_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(Redpitaya::write_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::write_attr_hardware
}

//--------------------------------------------------------
/**
 *	Write attribute Led0 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Redpitaya::write_Led0(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Redpitaya::write_Led0(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Redpitaya::write_Led0) ENABLED START -----*/
	write_led(RP_LED0, w_val);
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::write_Led0
}
//--------------------------------------------------------
/**
 *	Write attribute Led1 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Redpitaya::write_Led1(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Redpitaya::write_Led1(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Redpitaya::write_Led1) ENABLED START -----*/
	write_led(RP_LED1, w_val);
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::write_Led1
}
//--------------------------------------------------------
/**
 *	Write attribute Led2 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Redpitaya::write_Led2(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Redpitaya::write_Led2(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Redpitaya::write_Led2) ENABLED START -----*/
	write_led(RP_LED2, w_val);
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::write_Led2
}
//--------------------------------------------------------
/**
 *	Write attribute Led3 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Redpitaya::write_Led3(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Redpitaya::write_Led3(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Redpitaya::write_Led3) ENABLED START -----*/
	write_led(RP_LED3, w_val);
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::write_Led3
}
//--------------------------------------------------------
/**
 *	Write attribute Led4 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Redpitaya::write_Led4(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Redpitaya::write_Led4(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Redpitaya::write_Led4) ENABLED START -----*/
	write_led(RP_LED4, w_val);
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::write_Led4
}
//--------------------------------------------------------
/**
 *	Write attribute Led5 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Redpitaya::write_Led5(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Redpitaya::write_Led5(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Redpitaya::write_Led5) ENABLED START -----*/
	write_led(RP_LED5, w_val);
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::write_Led5
}
//--------------------------------------------------------
/**
 *	Write attribute Led6 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Redpitaya::write_Led6(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Redpitaya::write_Led6(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Redpitaya::write_Led6) ENABLED START -----*/
	write_led(RP_LED6, w_val);
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::write_Led6
}
//--------------------------------------------------------
/**
 *	Write attribute Led7 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Redpitaya::write_Led7(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Redpitaya::write_Led7(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Redpitaya::write_Led7) ENABLED START -----*/
	write_led(RP_LED7, w_val);
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::write_Led7
}
//--------------------------------------------------------
/**
 *	Read attribute Signal0 related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum max = 16384
 */
//--------------------------------------------------------
void Redpitaya::read_Signal0(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Redpitaya::read_Signal0(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Redpitaya::read_Signal0) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_Signal0_read, 16384);


	/*----- PROTECTED REGION END -----*/	//	Redpitaya::read_Signal0
}
//--------------------------------------------------------
/**
 *	Read attribute Signal1 related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum max = 16384
 */
//--------------------------------------------------------
void Redpitaya::read_Signal1(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Redpitaya::read_Signal1(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Redpitaya::read_Signal1) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_Signal1_read, 16384);
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::read_Signal1
}

//--------------------------------------------------------
/**
 *	Method      : Redpitaya::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any
 *                for specified device.
 */
//--------------------------------------------------------
void Redpitaya::add_dynamic_attributes()
{
	/*----- PROTECTED REGION ID(Redpitaya::add_dynamic_attributes) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic attributes if any
	
	/*----- PROTECTED REGION END -----*/	//	Redpitaya::add_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Command Decimation related method
 *	Description: 
 *
 *	@param argin decimation factor, legal values: 0--5
 *               1, 8, 64, 1024, 8192, 65536
 */
//--------------------------------------------------------
void Redpitaya::decimation(Tango::DevShort argin)
{
	DEBUG_STREAM << "Redpitaya::Decimation()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Redpitaya::decimation) ENABLED START -----*/
	
	//	Add your own code
	
	if (argin<=0) argin=0;
	else if (argin>=5) argin=5;
	
        t_params[TIME_RANGE_PARAM] = argin;  //default_value 1024
	if(rp_set_params((float *)&t_params, PARAMS_NUM) < 0) {
		DEBUG_STREAM <<  "rp_set_params() failed!"<<endl;
	    }

	/*----- PROTECTED REGION END -----*/	//	Redpitaya::decimation
}

/*----- PROTECTED REGION ID(Redpitaya::namespace_ending) ENABLED START -----*/



/*----- PROTECTED REGION END -----*/	//	Redpitaya::namespace_ending
} //	namespace

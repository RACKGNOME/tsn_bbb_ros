/* Code to retrieve register values of the ADC to measure analog inputs. Intended
*  to function using ROS Indigo on a Beaglebone Black with Ubuntu ARM OS. Kernel
*  version 3.8.x REQUIRED with this library
*  Developer: Theodore Nowak BSc., Case Western Reserve University EECS Department
*  Date of Initiation: 04/14/2015
*
*  Functionality: Retrieve the data from the registers within the ADC of the Beagle-
*  Bone Black running Linux ARM Kernel 3.8.x.
*
*  Application: Low cost gait tracking.
*/

#include <analog_inputs.h>

analog_inputs::analog_inputs()  {
}

FILE* analog_inputs::returnFile(unsigned int pin)  {
	char file_name[81];
	snprintf(file_name, 81, "/sys/bus/iio/devices/iio:device0/in_voltage%u_raw", pin);

	FILE* file = fopen(file_name, "r");

	return file;
}

// Check that we are getting values from the adc
bool analog_inputs::verifyADCPin(FILE* file, long size)  {

	// char val[7];
	char * val;
	long int value_int = 0;
	unsigned int error_check;

	val = (char*) malloc (sizeof(char)*size);

	rewind(file);
	// error_check = fread(&val, 6,6,file);
	
	fread(val, 1, size, file);

	/*if (error_check != 6)  {
		printf("Reading error.");
		return false;
	}
	else  {
		return true;
	}*/
	return true;

}

long analog_inputs::getFileSize(FILE* file){
	long size;

	fseek(file, 0, SEEK_END);
	size = ftell(file);
	rewind(file);

	return size;
}

// Read the current ADC value from input pin
int analog_inputs::adcRead(FILE* file, long size)
{
	char * val;
	long int value_int = 0;
	unsigned int debug = 0;

	val = (char*) malloc (sizeof(char)*size);

	rewind(file);
	debug = fread(val, 1, size, file);
	//perror();
	printf("Debug: %u", debug);
	value_int = strtol(val,NULL,0);
	return value_int;
}
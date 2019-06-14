//============================================================================
// Name        : TsAV_AdaptiveControl.cpp
// Author      : CN
// Version     :
// Copyright   : Copyright 2019
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "AdaptiveClasses.h"
using namespace std;

#define CONVERTER_INPUT_DATA 	1
#define CONVERTER_OUTPUT_DATA 	0

#define ACTUATOR_INPUT_DATA		1
#define ACTUATOR_OUTPUT_DATA	0

#define SENSOR_INPUT_DATA		1
#define SENSOR_OUTPUT_DATA		0

Actuator	actuator;
Converter 	converter;
Sensor 		sensor;

void setup() {

}

void loop() {
	if (sensor()) {
		converter[CONVERTER_INPUT_DATA] = sensor[SENSOR_OUTPUT_DATA];
		actuator[ACTUATOR_INPUT_DATA] = converter[CONVERTER_OUTPUT_DATA];
		actuator();
	}
}

int main() {

	return 0;
}

/*
 * Sensor.h
 *
 *  Created on: Jun 14, 2019
 *      Author: u1
 */

#ifndef SENSOR_H_
#define SENSOR_H_

#define SENSOR_N_PARMS	2

typedef int 	SensorParms;
typedef int		SensorParmsIndex;
typedef int		SensorResults;

namespace std {

class Sensor {
private:
	SensorParms parms[SENSOR_N_PARMS];
public:
	Sensor();
	SensorParms& 	operator[](SensorParmsIndex ind);
	SensorResults 	operator()();
	virtual ~Sensor();
};

} /* namespace std */

#endif /* SENSOR_H_ */

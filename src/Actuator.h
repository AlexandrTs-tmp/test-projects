/*
 * Actuator.h
 *
 *  Created on: Jun 14, 2019
 *      Author: u1
 */

#ifndef ACTUATOR_H_
#define ACTUATOR_H_

#define ACTUATOR_N_PARMS	2

typedef int 	ActuatorParms;
typedef int		ActuatorParmsIndex;
typedef int	ActuatorResults;

namespace std {

class Actuator {
private:
	ActuatorParms parms[ACTUATOR_N_PARMS];
public:
	Actuator();
	ActuatorParms& 	operator[](ActuatorParmsIndex ind);
	ActuatorResults operator()();
	virtual ~Actuator();
};

} /* namespace std */

#endif /* ACTUATOR_H_ */

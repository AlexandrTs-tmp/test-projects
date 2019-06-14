/*
 * Converter.h
 *
 *  Created on: Jun 14, 2019
 *      Author: u1
 */

#ifndef CONVERTER_H_
#define CONVERTER_H_

#define CONVERTER_N_PARMS	2

typedef int 	ConverterParms;
typedef int		ConverterParmsIndex;
typedef int		ConverterResults;

namespace std {

class Converter {
private:
	ConverterParms parms[CONVERTER_N_PARMS];
public:
	Converter();
	ConverterParms& 	operator[](ConverterParmsIndex ind);
	ConverterResults 	operator()();
	virtual ~Converter();
};

} /* namespace std */

#endif /* CONVERTER_H_ */

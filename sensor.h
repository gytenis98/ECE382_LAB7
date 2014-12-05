/*
 * sensor.h
 *
 *  Created on: Dec 4, 2014
 *      Author: C16Gytenis.Borusas.l
 */

#ifndef SENSOR_H_
#define SENSOR_H_

void enableADC10Subsystem();
void initLEDs();
unsigned int getLeftSensorReading();
unsigned int getRightSensorReading();
unsigned char isLeftSensorCloseToWall();
unsigned char isRightSensorCloseToWall();

#endif /* SENSOR_H_ */


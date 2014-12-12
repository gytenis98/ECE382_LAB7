ECE382_LAB7
===========
#Lab 7 - A/D Conversion - "Robot Sensing"


##Overview

This lab is designed to assist you in learning the concepts associated with the analog-to-digital converter (ADC) for your MSP430. A set of three infrared (IR) emitter and detector pairs on your robot is used to bring in analog voltage values for the ADC. You will program your MSP430 to interpret these incoming voltages to determine whether your mobile robot is approaching a wall in front or on one of its sides. The skills you will learn from this lab will come in handy in the future b especially for your senior design project since many designs require you to interface analog systems with digital systems.

##Sensor Boards

Each robot has three IR emitter/detector pairs. By using the headers available to you on the top of the robot PCB, you can read a value between 0 V and 5 V that is proportional to the distance to an object in front of the IR sensor. The left/right directions are relative to a person standing behind the robot.

##Required Functionality (sent to Dr. York email)

Use the ADC subsystem to light LEDs based on the presence of a wall. The presence of a wall next to the left sensor should light LED1 on your Launchpad board. The presence of a wall next to the right sensor should light LED2 on your Launchpad board. Demonstrate that the LEDs do not light until each of the three sensors comes into close proximity with a wall.

##B Functionality (Done)

Create a standalone library for your ATD code and release it on Github. This should be separate from your lab code. It should have a thoughtful interface and README, capable of being reused in the robot maze laboratory.

##A Functionality (done)

Since each robot's sensors are a little bit different, you need to fully characterize the sensor for your robot. Create a table and graphical plot that shows the ATD values for a variety of distances from a maze wall. This table/graph must be generated for each IR sensor. Use these values to determine how the IR sensors work so you can properly use them to solve the maze.

![LCD](https://raw.githubusercontent.com/gytenis98/ECE382_LAB7/master/2014-12-11%2021.49.01.jpg?raw=true "LCD")

![LCD](https://raw.githubusercontent.com/gytenis98/ECE382_LAB7/master/graph.JPG?raw=true "LCD")


##Prelab

###Hardware setup

![LCD](https://raw.githubusercontent.com/gytenis98/ECE382_LAB7/master/Initial%20design.JPG?raw=true "LCD")

I will be using P1.2, P1.3 and P1.4 for IR sensors

###Registers:

ADC10CTL0: Control Register 0, used to select references (SREFx), sample-and-hold times (ADC10SHTx), can enable interrupts (ADC10IE)
 ADC10CTL1: Control Register 1, used to select input channel (INCHx), ADC10BUSY tells user conversion is still happening
 P1DIR: set BIT0 as output for red LED
 P1OUT: use to set or clear BIT0, the red LED 
 
###Interupts:
 Interrupts create unnessary confusion. I think sequentional program would be easier.
 
###Senors:


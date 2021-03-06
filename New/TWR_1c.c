#pragma config(Sensor, in1,    BouncyRight,    sensorLineFollower)
#pragma config(Sensor, in2,    BouncyMid,      sensorLineFollower)
#pragma config(Sensor, in3,    BouncyLeft,     sensorLineFollower)
#pragma config(Sensor, in4,    Pot,            sensorPotentiometer)
#pragma config(Sensor, in5,    Light1,         sensorReflection)
#pragma config(Sensor, dgtl2,  SonarIn,        sensorSONAR_mm)
#pragma config(Sensor, dgtl4,  Limit,          sensorTouch)
#pragma config(Sensor, dgtl5,  Button,         sensorTouch)
#pragma config(Sensor, dgtl6,  LEDR,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  LEDY,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  LEDG,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl9,  EncodRa,        sensorQuadEncoder)
#pragma config(Sensor, dgtl11, EncodLa,        sensorQuadEncoder)
#pragma config(Motor,  port1,           Flashy,        tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           TankRight,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           TankLeft,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           Servo,         tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: TWR_1c
  Team Members: Josh L && Zak S
  Date: 2/24/20
  Summary: Forward and Back


  Task Description:
            Have the rover wait for the button to be pushed then turn on the green LED, drive forward in a straight line for 3 seconds, stop, turn around 180*, drive back to the start, stop and turn on the red LED for 1 second.

  Pseudocode:
            Wait for button push then
            Set the green LED to 1
            Set drive motors to drive forward
            Wait 3 sec
            Set drive motor left to backward
            Set drive motor right to forward
            Wait x seconds
            Set drive motors to drive forward
            Wait 3 sec
            Stop the drive motors
            Set the green LED to 0
            Turn red LED on
            Wait 1 sec
            Turn red LED off
*/

task main()
{                                     //Program begins, insert code within curly braces
	untilTouch(Button);
	wait(1);
	turnLEDOn(LEDG);
	startMotor(TankLeft, 127);
	startMotor(TankRight, 83);
	wait(2.7);
	startMotor(TankLeft, 127);
	startMotor(TankRight, -83);
	wait(1.08);
	startMotor(TankLeft, 127);
	startMotor(TankRight, 83);
	wait(2.5);
	stopMotor(TankLeft);
	stopMotor(TankRight);

  turnLEDOff(LEDG);
  turnLEDOn(LEDR);
  wait(1);
  turnLEDOff(LEDR);






}

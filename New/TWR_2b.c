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
  Project Title: TWR_2a
  Team Members: Josh L && Zak S
  Date: 3/6/20
  Summary: Variables


  Task Description: Use variables to program the rover to make the yellow LED blink 10 times. Turn on the green LED for one
second and then off for half a second, repeat 10 times.



  Pseudocode:
		While blinks is less than 10:
			Turn yellow LED on.
			Wait 1 second.
			Trun yellow LED off.
			Wait 0.5 seconds.
			Increase blinks by one.

		Set blinks to 0.
	  While blinks is less than 10:
			Turn green LED on.
			Wait 1 second.
			Trun green LED off.
			Wait 0.5 seconds.
			Increase blinks by one.
*/
task main()
{                                     //Program begins, insert code within curly braces
	int blinks = 0;
	while(blinks<10){
	  turnLEDOn(LEDY);
	  wait(1);
	  turnLEDOff(LEDY);
	  wait(0.5);
	  blinks++;
  }
  blinks = 0;
  while(blinks<10){
	  turnLEDOn(LEDG);
	  wait(1);
	  turnLEDOff(LEDG);
	  wait(0.5);
	  blinks++;
  }
}

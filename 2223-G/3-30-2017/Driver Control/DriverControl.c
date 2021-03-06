#pragma config(Sensor, dgtl1,  leftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  rightEncoder,   sensorQuadEncoder)
#pragma config(Motor,  port1,           RightMotor,    tmotorVex393_HBridge, openLoop, encoderPort, dgtl3)
#pragma config(Motor,  port10,          LeftMotor,     tmotorVex393_HBridge, openLoop, reversed, encoderPort, dgtl1)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int threshold = 15;

task main(){
	while(true){
		motor[LeftMotor] = vexRT[Ch2]>threshold  || vexRT[Ch2]< -(threshold) || vexRT[Ch1]>threshold || vexRT[Ch1]< -(threshold) ? vexRT[Ch2] - vexRT[Ch1] : 0;
		motor[RightMotor] = vexRT[Ch2]>threshold  || vexRT[Ch2]< -(threshold) || vexRT[Ch1]>threshold || vexRT[Ch1]< -(threshold) ? vexRT[Ch2] + vexRT[Ch1] : 0;
	}
}

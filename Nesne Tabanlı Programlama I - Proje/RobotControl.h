/**
* @File RobotControl.h
* @Date December, 2017
* @Author Yusuf Furkan Yücesoy (yusuffurkanyucesoy@gmail.com)
*
* \brief RobotControl Class
* \brief This class used in robot control
*/
#pragma once
#include <vector>
#include <math.h>
#include "RobotInterface.h"
#include "RangeSensor.h"
#include "SonarSensor.h"
#include "Position.h"
#include "PioneerRobotInterface.h"
using namespace std;
class RobotControl 
{
	/**
	* \brief sensor is RangeSensor type vector attiribute
	*/
	vector<RangeSensor *> sensor;
	/**
	* \brief position attribute(from Position class using composition)
	*/
	Position *position;
	/**
	* \brief robotInterface attribute(from RobotInterface class using aggregation)
	*/
	RobotInterface *robotInterface;
public:
	/**
	* \brief  Default constructor function of the Robot Control class
	*/
	RobotControl();
	/**
	* \brief  Constructor function of the Robot Control class
	* This function assigns the given values to parameters
	* \param robotInterface is RobotInterface type object
	* \param pos is Position type object
	* \param sensor is RangeSensor type object	
	*/
	RobotControl(RobotInterface *robotInterface,Position *pos,RangeSensor * sensor);
	/**
	* \brief  This function allows the progress of the robot at the desired speed. However, advance of robot stops if there are barriers.
	* \param speed is an integer attribute
	*/
	void safeMove(int speed);
	/**
	* \brief  This function turns the robot to the left.
	*/
	void turnLeft();
	/**
	* \brief  This function turns the robot to the right.
	*/
	void turnRight();
	/**
	* \brief  This function allows the robot to move in a forward direction
	*/
	void forward();
	/**
	* \brief  This function prints tthe robot's position and sensor values on the screeen in a certain format
	*/
	void print();
	/**
	* \brief  This function allows the robot to go as far as the given distance, then after the distance has passed stops the robot.
	* \param distance is a float attribute
	*/
	void moveDistance(float distance);
	/**
	* \brief  This function allows the robot to go straight and stops when a wall reaches a certain distance.
	
	*/
	void closeWall();
	/**
	* \brief Destrustor function of the RobotControl class.
	*/
	~RobotControl();
};


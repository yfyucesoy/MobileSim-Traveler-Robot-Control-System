/**
* @File Menu.h
* @Date December, 2017
* @Author Yusuf Furkan Yücesoy (yusuffurkanyucesoy@gmail.com)
*
* \brief Menu Class
* \brief This class is the menu section of the application.
*/
#pragma once


#include "RobotInterface.h"
#include "RobotControl.h"

#include <iostream>
class Menu
{
	/**
	* \brief position  attribute (from Position class using aggregation)
	*/
	Position *position;
	/**
	* \brief range sensor attribute(from RangeSensor class using aggregation)
	*/
	RangeSensor *sensor;
	/**
	* \brief robot interface attribute(from RobotInterface class using aggregation)
	*/
	RobotInterface *robotInterface;
	/**
	* \brief robot control attribute(from robotControl class using aggregation)
	*/
	RobotControl *robotControl;
	/**
	* \brief connection status attribute.
	* \brief parameter indicating that robot connection
	*/
	boolean connectionStatus;
public:
	/**
	* \brief constructor function of Menu class
	*/
	Menu();
	/**
	* \brief This function is control function for inputs
	* \param menuRange is integer type parameter
	* \param input is string type parameter
	*/
	int controlInput(int menuRange,string input);
	/**
	* \brief This function prints main menu to screen and asks the user what action he wants to perform 
	*/
	void mainMenu();
	/**
	* \brief This function prints connetion menu to screen and asks the user what action he wants to perform
	*/
	void connectionMenu();
	/**
	* \brief This function prints motion  menu to screen and asks the user what action he wants to perform
	*/
	void motionMenu();
	/**
	* \brief This function prints sensor menu to screen and asks the user what action he wants to perform
	*/
	void sensorMenu();
	/**
	* \brief This function asks to distance from user and turns it
	* \return distance is float parameter
	*/
	float askDistance();
	/**
	* \brief This function asks to speed from user and turns it
	* \return speed is integer parameter
	*/
	int askSafeMoveSpeed();
	/**
	* \brief This function asks to speed from user and turns it
	* \return speed is float parameter
	*/
	float askSpeed();
	/**
	* \brief This function converts string parameter to float parameter
	* \param input is string
	* \return data is float
	*/
	float controlFloat(string input);
	/**
	* \brief This function converts string parameter to integer parameter
	* \param input is string
	* \return data is integer
	*/
	int controlInteger(string input);
	/**
	* \brief destrutor function of Menu class
	*/
	~Menu();
};


/**
* @File Position.cpp
* @Date December, 2017
* @Author Ozan Baki KESKIN (ozankeskin9774@gmail.com)
*
*/
#include "Position.h"


/**
* \brief Constructor function of the Position class
* This function assings to parameters as default zero.
*/
Position::Position()
{
	this->x = 0;
	this->y = 0;
	this->th = 0;
}
/**
* \brief getter function of the x position of the robot
* \return the x position of the robot
*/
float Position::getX()
{
	return this -> x;
}

/**
* \brief setter function of the x position of the robot
* \param x a float attribute
*/
void Position::setX(float x)
{
	this -> x = x;
}
/**
* \brief getter function of the y position of the robot
* \return the y position of the robot
*/
float Position::getY()
{
	return this -> y;
}
/**
* \brief setter function of the y position of the robot
* \param y a float attribute
*/
void Position::setY(float y)
{
	this -> y = y;
}
/**
* \brief getter function of the orientation angle of the robot
* \return th
*/
float Position::getTh()
{
	return this -> th;
}
/**
* \brief setter function of the orientation angle of the robot
* \param th a float attribute
*/
void Position::setTh(float th)
{
	this->th = th;
}
/**
* \brief checks whether the positions refer to the same position
* \param pos is Position type object for checking Position's attributes
* \return false if the one of the positions is false, otherwise return true
*/
bool Position::operator==(const Position & pos)
{
	if (this -> getX() != pos.x)
		return false;
	if (this -> getY() != pos.y)
		return false;
	if (this -> getTh() != pos.th)
		return false;
	return true;
}

/**
* \brief Destructor function of the Position class
*/
Position::~Position()
{
}

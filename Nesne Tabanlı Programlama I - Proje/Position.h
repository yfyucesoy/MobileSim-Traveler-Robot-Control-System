#pragma once
/**
* @File Position.h
* @Date December, 2017
* @Author Ozan Baki KESKIN (ozankeskin9774@gmail.com)
*
* \brief Position Class
* \brief This class has keeping position of robot and has the task of managing information
*/
class Position
{
	/**
	* \brief x position of the robot attribute
	*/
	float x;
	/**
	* \brief y position of the robot attribute
	*/
	float y;
	/**
	* \brief th the orientation angle of the robot attribute
	*/
	float th;
public:
	/**
	* \brief Constructor function of the Position class
	*/
	Position();

	/**
	* \brief getter function of the x position of the robot
	* \return the x position of the robot
	*/
	float getX();
	/**
	* \brief setter function of the x position of the robot
	* \param x a float attribute
	*/
	void setX(float x);
	/**
	* \brief getter function of the y position of the robot
	* \return the y position of the robot
	*/
	float getY();
	/**
	* \brief setter function of the y position of the robot
	* \param y a float attribute
	*/
	void setY(float y);
	/**
	* \brief getter function of the orientation angle of the robot
	* \return th
	*/
	float getTh();
	/**
	* \brief setter function of the orientation angle of the robot
	* \param th a float attribute
	*/
	void setTh(float th);
	/**
	* \brief checks whether the positions refer to the same position
	* \param pos is Position type object for checking Position's attributes
	* \return false if the one of the positions is false, otherwise return true
	*/
	bool operator==(const Position& pos);
	/**
	* \brief Destructor function of the Position class
	*/
	~Position();
};


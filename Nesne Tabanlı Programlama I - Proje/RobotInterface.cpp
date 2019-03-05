#include "RobotInterface.h"

RobotInterface::RobotInterface()
{

}

void RobotInterface::setPosition(Position * pos)
{
	position = pos;
}

void RobotInterface::setSensor(RangeSensor * sen)
{
	this->rangeSensor = sen;
}

RobotInterface::~RobotInterface()
{
}

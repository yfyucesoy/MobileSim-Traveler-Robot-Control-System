#include "RangeSensor.h"



RangeSensor::RangeSensor()
{

}


void RangeSensor::setType(string type)
{
	this->type = type;
}

RangeSensor::~RangeSensor()
{
}
string RangeSensor::getType(){
	return this->type;
}
#pragma once
#include "RobotInterface.h"
#include "PioneerRobotAPI.h"
#include "SonarSensor.h"
class PioneerRobotInterface : public RobotInterface , public PioneerRobotAPI
{
	RangeSensor *rangeSensor;
	Position *position;
public:
	PioneerRobotInterface();
	PioneerRobotInterface(RangeSensor *sensor, Position *pos);
	void update();
	bool open();
	void move(float speed);
	bool close();
	void turn(RobotInterface::DIRECTION dir);
	void stop();
	void updateRobot();

	~PioneerRobotInterface();
};


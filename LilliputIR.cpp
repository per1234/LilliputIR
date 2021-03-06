
// Please read Bounce.h for information about the liscence and authors

#include "Arduino.h"
#include "LilliputIR.h"


LilliputIR::LilliputIR(uint8_t pin)
{
  thePin = pin;
}

void LilliputIR::power()
{
  digitalWrite(thePin,LOW);
	delayMicroseconds(8235);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(3960);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(360);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(360);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(450);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(360);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(360);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(360);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(675);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
}

void LilliputIR::mute()
{
  digitalWrite(thePin,LOW);
  delayMicroseconds(8235);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(3960);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(675);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(675);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(675);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(675);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1350);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(675);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(675);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
}

void LilliputIR::up()
{
  digitalWrite(thePin,LOW);
  delayMicroseconds(8235);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(4005);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(540);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1485);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(540);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
}

void LilliputIR::down()
{
  digitalWrite(thePin,LOW);
  delayMicroseconds(8235);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(3960);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(540);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1485);
  digitalWrite(thePin,LOW);
  delayMicroseconds(540);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1485);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(540);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(540);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1485);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1485);
  digitalWrite(thePin,LOW);
  delayMicroseconds(540);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1485);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
}

void LilliputIR::right()
{
  digitalWrite(thePin,LOW);
  delayMicroseconds(8235);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(3960);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(360);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1395);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
}

void LilliputIR::left()
{
  digitalWrite(thePin,LOW);
  delayMicroseconds(8235);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(3960);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1485);
  digitalWrite(thePin,LOW);
  delayMicroseconds(540);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(540);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
}

void LilliputIR::input()
{
  digitalWrite(thePin,LOW);
  delayMicroseconds(8235);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(4005);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(540);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(630);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(405);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(450);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
  delayMicroseconds(1440);
  digitalWrite(thePin,LOW);
  delayMicroseconds(585);
  digitalWrite(thePin,HIGH);
}

void LilliputIR::menu()
{
	digitalWrite(thePin,LOW);
	delayMicroseconds(8235);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(3960);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(675);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(360);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(675);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(360);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(360);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1440);
	digitalWrite(thePin,LOW);
	delayMicroseconds(585);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(405);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
	delayMicroseconds(1395);
	digitalWrite(thePin,LOW);
	delayMicroseconds(630);
	digitalWrite(thePin,HIGH);
}

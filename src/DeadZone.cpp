#include"DeadZone.h"
#include <cmath>

float DeadZone(float value, float deadZone) {
	if (fabs(value) <= deadZone) {
		value = 0;
	}
	return value;
}

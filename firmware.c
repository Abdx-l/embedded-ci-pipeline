#include "firmware.h"
int safe_output(int requested,int sensor_ok){int value=!sensor_ok?0:requested<0?0:requested>100?100:requested;board_write(value);return value;}

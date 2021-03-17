#ifndef _WINDMILL_H
#define _WINDMILL_H

#include "headfile.h"
#include "M6020_motor.h"
#include "ws2812.h"

//指令
#define led_reset 1
#define run_led 2

#define motor_stop 3
#define run_motor 4

#define orange_color 5
#define cyan_color 6

#define success_hit 7
#define fail_hit 8

#define movement_normal 9
#define movement_other 10

#define MAX_NUM 62   //中间每排灯珠数
#define TOTAL1 1 //上边灯数unknow
#define TOTAL2 62*7 //中间边灯数433
#define TOTAL3 1  //下边灯数130



void windmill_Process(void);
uint8_t queue_get(void);
void fortest(void);
void Get_next_lamp(void);
void queue_insert(uint8_t control_id);
#endif

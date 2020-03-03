/*
Name- Divyang Thakkar
Emp Id- 142876
Version - 1.0

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_Size 50

enum  Manufacturer{
    Apple,
    Oneplus,
    Samsung,
    Sony
};

typedef enum Manufacturer OEM;

struct Mobile{

    int u_model_num;
    OEM obj;
    double size;
    double bat_cap;
    double av_mem;
    double int_storage;
    double cam_res;
    double price;
} ;

typedef struct Mobile mobile_t;


void display(mobile_t *ptr ,int length, int u_num);
void avg_price(mobile_t *ptr ,int length);
void max_battery(mobile_t *ptr ,int length);
void max_res(mobile_t *ptr, int length, int p1, int p2);
void count_model(mobile_t *ptr, int length, int p1, int p2, int code);
void count_min_storage(mobile_t *ptr ,int length, int min_str);


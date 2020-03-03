/*
Name- Divyang Thakkar
Emp Id- 142876
Version - 1.0

*/

#include "final.h"
void display(mobile_t *ptr ,int length, int u_num)
{
    mobile_t * parr = ptr;
    for(int i=0;i<length;i++)
    {
        if(parr->u_model_num == u_num)
        {
            printf("\n Company =%d", parr->obj);
            printf("\n Size = %lf",parr->size);
            printf("\n Battery Capacity = %lf",parr->bat_cap);
            printf("\n Available Memory = %lf",parr->av_mem);
            printf("\n Internal Storage = %lf",parr->int_storage);
            printf("\n Camera Resolution = %lf",parr->cam_res);
            printf("\n Price = %lf",parr->price);
        }
        parr++;
    }
}

void avg_price(mobile_t *ptr ,int length)
{
    double avg,sum=0;
    mobile_t * parr = ptr;
    for(int i=0;i<length;i++)
    {
        sum+=parr->price;
        parr++;
    }
    avg = (sum/length);
    printf("\n The average price of all modules %lf=",avg);
}

void max_battery(mobile_t *ptr ,int length)
{
    double max;
    int model=0;
    mobile_t * parr = ptr;
    max = parr->bat_cap;
    for(int i=1;i<length;i++)
    {
        if(max<parr->bat_cap)
        {
            max = parr->bat_cap;
            model= parr->u_model_num;
        }

        parr++;
    }
    printf("\n Model with Maximum Battery Capacity = %d", model);
}

void max_res(mobile_t *ptr, int length, int p1, int p2)
{
    double max;
    int model=0;
    mobile_t * parr = ptr;
   // max = 0;
    for(int i=0;i<length;i++)
    {
        if(parr->price>=p1 && parr->price<=p2)
        {
            if(max<parr->cam_res)
            {
                    max = parr->cam_res;
                    model = parr->u_model_num;
            }

            parr++;
        }

    }
    printf("\n The Model with Max. Camera Resolution = %d", model);
}

void count_model(mobile_t *ptr, int length, int p1, int p2, int code)
{
    int count =0;
    mobile_t * parr = ptr;
    for(int i=0;i<length;i++)
    {
        if(parr->price>=p1 && parr->price<=p2)
        {
            if(code==parr->u_model_num)
            count++;
        }

    }
    printf("\n The number of Models = %d", count);
}


void count_min_storage(mobile_t *ptr ,int length, int min_str)
{
    int count =0;
    double min;
    mobile_t * parr = ptr;
    min = min_str;
    for(int i=0;i<length;i++)
    {
        if(parr->int_storage>=min)
            count++;
    }
    printf("\n The number of Models with Minimum Storage Capacity = %d", count);
}



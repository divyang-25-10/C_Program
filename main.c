/*
Name- Divyang Thakkar
Emp Id- 142876
Version - 1.0

*/

#include "final.h"
int main()
{
    int length =6;
    int n;
    mobile_t  * m_arr;
    m_arr = malloc (MAX_Size*sizeof(mobile_t));
    mobile_t mob [6] = {
        {1, Apple, 6.5, 3300, 25, 64, 12, 80000},
        {2, Apple, 6, 3000, 21, 32, 8, 60000},
        {3, Apple, 5, 2700, 18, 16, 5, 40000},
        {4, Oneplus, 6.5, 3900, 40, 64, 18, 45000},
        {5, Sony, 5.5, 2100, 15, 64, 8, 37000},
        {6, Samsung, 6.5, 3800, 35, 64, 15, 75000}
    };

   do {
        printf("\n 1) Display Model with given Unique Number");
        printf("\n 2) Finding Average");
        printf("\n 3) Model with max battery");
        printf("\n 4) Maximum Camera Resolution");
        printf("\n 5) Models in given price range");
        printf("\n 6) Models with minimum storage capacity");
        printf("\n Press 0 to exit");
      printf("Enter Functionality code: \n");

      scanf("%d",&n);
      switch(n)
     {
         case 1:

           display(mob,length,4);
           break;
         case 2:

           avg_price(mob , length);
           break;
         case 3:

           max_battery(mob,length);
           break;
         case 4:

           max_res(mob,length,30000,50000);
           break;

          case 5:

           count_model(mob,length,39000,70000,1);
            break;
          case 6:

            count_min_storage(mob,length,16);
            break;

         default: break;

    }

   }while( n!=0 );

    return 0;
}



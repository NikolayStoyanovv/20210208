/*7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/
#include<stdio.h>

static char daytab[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

int day_of_year(int year,int month,int day);
void month_day(int year,int yearday);

int main(void)
{
    int day,mo,dat;

    day=day_of_year(1988,2,29);
    printf("The day is number: %d of the year\n",day);
  
    return 0;
}

/* day_of_year: set day of year from month & day */

int day_of_year(int year,int month,int day)
{
    int i,leap;

    leap = year % 4 == 0 && year%100 != 0 || year%400 == 0;
    
    for(i=1;i<month;i++)
        day += daytab[leap][i];

    return day;
}




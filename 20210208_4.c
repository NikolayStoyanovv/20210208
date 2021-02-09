/*Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.*/
#include <stdio.h>
double avgArray(double *balance){
    double sum=0.0;
    double avg=0.0;
    double count=0.0;
    for(int i=0;balance[i]!='\0';i++){
        printf("Please enter a integer value for element %d: ",i+1);
        scanf("%lf",&balance[i]);
        sum+=balance[i];
        count++;
    }avg=sum/count;
    printf("The average of elements is: %lf \n",avg);
}
double balance[5] = {1000.0, 2.0, 3.5, 7.5, 50.3};
int main(){
    avgArray(balance);
    return 0;
}
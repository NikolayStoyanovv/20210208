/*Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf*/
#include <stdio.h>
double addArray(int *balance){
    
    for(int i=0;balance[i]!='\0';i++){
        printf("Please enter a integer value for element %d: ",i+1);
        scanf("%d",&balance[i]);
    }
    printf("You entered\n");
    for(int i=0;balance[i]!='\0';i++){
        printf("Element %d is equal to %d\n",i+1,balance[i]);

    }
}
int balance[5] = {1000, 2, 3, 7, 50};
int main(){
    addArray(balance);
    return 0;
}
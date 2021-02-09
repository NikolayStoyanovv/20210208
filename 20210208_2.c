/*Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/
#include <stdio.h>
int addArray(int balance[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("Please enter a integer value for [%d][%d] element: \n",i+1,j+1);
            scanf("%d",&balance[i][j]);
        }
    }
    printf("You entered:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf(" %d ",balance[i][j]);
        }
        printf("\n");
    }
}
int balance[5][5] = {{1000, 2, 3, 7, 50},
                     {1000, 2, 3, 7, 50},
                     {1000, 2, 3, 7, 50},
                     {1000, 2, 3, 7, 50},
                     {1000, 2, 3, 7, 50}, 
                        };
int main(){
    addArray(balance);
    return 0;
}
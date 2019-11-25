#include<stdio.h>
#include"myBank.h"



int main(){
    char command;
    double Money = 0;
    int acc;
    printf("Welcome to orad's bank\n");
    while(command!='E')
    {   
        int c=1;
        
        
        
        printf("Transaction type?: ");
         
        if(scanf(" %c",&command)!=1){
            printf("wrong input");
            command='H';
            
        }      
        
       
        
        while(c==1){
            switch (command)
        {
            case 'O':                
                printf("Initial deposit?: ");
                if(scanf("%lf",&Money)!=1){
                    printf("Wrong input");
                    command='H';
                    continue;
                }
                printf("\n");
                O(Money); 
                c=2;               
                break;           
        
            case 'B':
                printf("Account number?: ");
                if(scanf("%d",&acc)!=1){
                    printf("Wrong Input");
                    command='H';
                    continue;
                }
                printf("\n");
                B(acc);
                c=2;
                break;
            case 'D':
                printf("Account number?: ");
                if(scanf("%d",&acc)!=1){
                    printf("Wrong Input");
                    command='H';
                    continue;
                }
                printf("\nAmount?: ");
                if(scanf("%lf",&Money)!=1){
                    printf("Wrong input");
                    command='H';
                    continue;
                }
                printf("\n");
                D(acc,Money);
                c=2;
                break;
                    
                
            case 'W':
                printf("Account number?: ");
                if(scanf("%d",&acc)!=1){
                    printf("Wrong Input");
                    command='H';
                    continue;
                }
                printf("\nAmount?: ");
                if(scanf("%lf",&Money)!=1){
                    printf("Wrong input");
                    command='H';
                    continue;
                }
                printf("\n");
                W(acc,Money);
                c=2;
                break;
                
            case 'C':
                printf("Account number?: ");
                if(scanf("%d",&acc)!=1){
                    printf("Wrong Input");
                    command='H';
                    continue;
                }
                printf("\n");
                C(acc);
                c=2;
                break;
            case 'I':
                printf("Intrest rate?:");
                if(scanf("%d",&acc)!=1){
                    printf("Wrong Input");
                    command='H';
                    continue;
                }
                I(acc);
                c=2;
                break;
            case 'P':

                P();
                c=2;
                break;
            
            case 'H':
                
                while ((c = getchar()) != '\n' && c != EOF){}
                c=2;
                break;
            case 'E':
                E();
                c=2;
                break;
                
            
            default:
                
                printf("Incorrect transaction type.");  
                command='H';
                continue;
                   
            
        }
        printf("\n");
            
        }
        
        
        
        
        
        

        
    }
    
    
}
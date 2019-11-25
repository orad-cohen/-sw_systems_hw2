#include<stdio.h>

#define ACC 901


static double Accounts[50][2];
int isFull(){//check if the bank is full;
    
    for(int i=0;i<50;i++){
        if(Accounts[i][0]==0){
            return 0;
        }
    }
    return 1;
}
double round(double Money){
    Money=Money*100;
    int c = (int) Money;
    Money = c/100.0;
    return Money;

}
int acNum(int Account){
    if(Account>950||Account<900){
        printf("Account number must be between 900-950.\n");
        return 1;
    }
    else{ return 0;}
}
int isClosed(int i){
    if(Accounts[i-ACC][0]){
        return 0;
    }
    else{
        printf("Account number %d isnt open.\n",i);
        return 1;}
}
int O(double Money){
    int i = 0;
    if(isFull()){
        printf("Bank is full, please delete an account in order to open a new one.\n");
    }
    else if(Money<0){
        printf("You cant deposit a negative");
    }
    else{
        while(Accounts[i][0]){
            i++;
        }
        Accounts[i][0] =1 ;
        Accounts[i][1] = round(Money);
        printf("Your new account number is : %d", (i+ACC));
    }
    return 0;
}
    



int B(int AccNum){
    if(acNum(AccNum)){
        return 0;
    }
    else if(isClosed(AccNum)){
        return 0;
    }
    else{
        printf("You have chosen account number: %d.\n Current account %d balance is : %.2lf\n",AccNum,AccNum,Accounts[AccNum-ACC][1]);
        return 0;
    }    
}

int D(int AccNum,double Money){
    if(acNum(AccNum)){
        return 0;
    }
    else if(isClosed(AccNum)){
        return 0;
    }
    else{
        Accounts[AccNum-ACC][1]+=round(Money);
        printf("You have chosen account number: %d.\nThe new blance is %.2lf",AccNum,Accounts[AccNum-ACC][1]);
    }    
    return 0;
}

int W(int AccNum, double Money){
    if(acNum(AccNum)){
        return 0;
    }
    else if(Accounts[AccNum-ACC][1]<round(Money)){
        printf("Account number %d doesn't have enough funds, current balance: %.2lf",AccNum,Accounts[AccNum-ACC][1]);
    }
    else{
        D(AccNum,(round(Money)*-1));
        
    }
    return 0;
}
int C(int AccNum){
    if(acNum(AccNum)){
        return 0;
    }
    else if(isClosed(AccNum)){
        return 0;
    }
    else{
        Accounts[AccNum-ACC][0]=0;
        Accounts[AccNum-ACC][0]=0;
        printf("You closed account number %d ",AccNum);
        return 0;
    }
}
int I(int Intrest){
    double rate = 1+(Intrest/100.0);
    int i = 50;
    while(i){
        i--;
        Accounts[i][1]=round(Accounts[i][1]*rate);
    }
    return 0;
    

}
int P(){
    int i=0;
    while(i-50){
        if(Accounts[i][0]){
            printf("\nAccount number %d current balance: %.2lf", (i+ACC),Accounts[i][1] );
        }
        i++;
    }
    return 0;
}
int E(){
    int i = 50;
    while(i){
        i--;
        Accounts[i][1]=0;
        Accounts[i][0]=0;
    }
    printf("Bank is closed, goodbye.");
    return 0;
}


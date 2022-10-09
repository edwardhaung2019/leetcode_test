//  Created by 黃亮程 on 2022/10/7.
//
//Given an integer x, return true if x is palindrome integer.

//-2^31 <= x <= (2^31) - 1==(2147483647)
#include "stdio.h"


/*int main(){
    
    
    int base=0,exp=0,result=1;
    int *res;
    res=&result;
    
    printf("PLS input base:");
    scanf("%d",&base);
    printf("PLS input exp:");
    scanf("%d",&exp);
    
    if(exp==0){
        *res=1;
    }
    else if(base==0){
        *res=0;
    }
    else{
        while(exp!=0){
            *res*=base;
            exp--;
        }
    }
    printf("%d\n",*res);
    return 0;
}
 */
int check(int x);

int main(){
    
    int input =0,res=0;

    
    printf("PLS input a integer:");
    scanf("%d",&input);
    
    
    res=check(input);
    res==1 ? printf("palindrome\n"):printf("not palindrome\n");
    
    return 0;
}

int check(int x){
    int result=0;
    
    if(x<0||(x%10==0&&x>0)){
        return result=0;
    }
    

    while(x>result){
            result=result*10+x%10;
            x/=10;
        }

    return (result==x||x==result/10);

}

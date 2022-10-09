//
//  pointer.c
//  link_Listtest
//
//  Created by 黃亮程 on 2022/10/3.
//

#include <stdio.h>
#include <string.h>

int value(char * input);
int main(){
    
    unsigned long len;
    char input[15]={0};
    printf("PLS enter:");
    scanf("%s",input);
    len = strlen(input);
    //printf("%d\n",len);

    int i,temp=0;
    for(i=0;i<len;i++){
        int pre=0,last=0;
        pre = value(input+i);
        last = value(input+i+1);
        //printf("%d\t",pre);
        //printf("%d\n",last);
        
        if(pre<last && i!=len){
            //printf("1st\n");
            temp = temp+(last-pre);
            i=i+1;
        }
        else{
            //printf("2nd\n");
            temp=temp+pre;

        }
        //printf("%d\n",temp);
    }
    printf("%d\n",temp);
    return 0;
    
}

int value(char * input){
    int temp=0;
    //printf("H\n");
    switch(*input){
        case 'I':
        temp=1;
        break;
        
        case 'V':
        temp=5;
        break;
        
        case 'X':
        temp=10;
        break;
            
        case 'L':
        temp=50;
        break;
            
        case 'C':
        temp=100;
        break;
       
        case 'D':
        temp=500;
        break;
       
        case 'M':
        temp=1000;
        break;
            
    }
    
  
    
   
    return temp;
}

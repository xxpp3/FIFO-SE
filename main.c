#include <stdio.h>
#include <stdlib.h>

int IsInMemory(char ref[] ,int i,int Mem[]){
    if(ref[i]==Mem[0]){
        return 1 ;
    }else if(ref[i]==Mem[1]){
        return 1 ;
    }else if(ref[i]==Mem[2]){
        return 1;
    }else{
        return 0;
        }
    }

int GetNextIndex(int Mem[],int LastI){
    if(Mem[0]==NULL){
        return 0 ;
    }else if(Mem[1]== NULL){
        return 1 ;
    }else if(Mem[2]== NULL){
        return 2;
    }else
        {
        return (LastI+1)%2 ;
    }
}
int main(){
    const int ref_size=29;
    char reference[ref_size];
    int lastIndex = 0 ;
    int memoir[3];
    int DF=0;
    printf("\n entre la chaine de refernce:  \n");
    scanf("%s[3-9]",reference);
    printf("\n");
    for(int i=0;i<ref_size;i++){
        char c = reference[i];
        printf("%id",atol(&c));
        printf("\n");
        i++;
    }
    for(int i =0 ; i<ref_size ;i++){
        int exist = IsInMemory(reference,i,memoir );
        if(exist==0){
            DF++;
            int NextIndex = GetNextIndex(memoir,lastIndex);
            memoir[NextIndex] = reference[i];
            lastIndex = NextIndex ;
        }
        i++;
    }
    printf("this is a DF :%d",DF);
}

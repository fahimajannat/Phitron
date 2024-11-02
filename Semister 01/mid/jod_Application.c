#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int experience ;
    for(int i=0;i<N;i++){
        scanf("%d",&experience);
        if(experience <1){
            printf("Entry-level candidate\n");
        }
        else if(experience>=1 && experience<=3){
            printf("Junior candidate\n");
        }
        else if(experience>=4 && experience<=7){
            printf("Mid-level candidate\n");
        }
        else{
            printf("Senior candidate\n");
        }

    }
}
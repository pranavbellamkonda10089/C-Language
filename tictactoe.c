#include<stdio.h>
char c1='1',c2='2',c3='3',c4='4',c5='5',c6='6',c7='7',c8='8',c9='9';
void draw(){
    printf("\n %c | %c | %c \n",c1,c2,c3);
    printf("---+---+---");
    printf("\n %c | %c | %c \n",c4,c5,c6);
    printf("---+---+---");
    printf("\n %c | %c | %c \n",c7,c8,c9);
}
void move(int x){
    printf("where you to make turn from 1 to 9\n");
    int choice;
    label:
    scanf("%d",&choice);
   // getchar();
    int flag=0;
    switch(choice){
        case 1: if(c1=='x'||c1=='o'){
                printf("donot overwrite,select other cell\n");
                goto label;
                }
                if(x%2==0){c1='x';} else c1='o';
                 //draw();
                 break;
        case 2:if(x%2==0){c2='x';} else c2='o';
                 //draw();
                 break;
        case 3:if(x%2==0){c3='x';} else c3='o';
                 //draw();
                 break;
        case 4:if(x%2==0){c4='x';} else c4='o';
                 //draw();
                 break;
        case 5:if(x%2==0){c5='x';} else c5='o';
                 //draw();
                 break;
        case 6:if(x%2==0){c6='x';} else c6='o';
                // draw();
                 break;
        case 7:if(x%2==0){c7='x';} else c7='o';
                // draw();
                 break;
        case 8:if(x%2==0){c8='x';} else c8='o'; 
                // draw();
                 break;
        case 9:if(x%2==0){c9='x';} else c9='o';
                // draw();
                 break;
        default: printf("wrong input enter again");
                goto label;
    }
}
int checkwinner(){
    if((c1==c2&& c2==c3)||(c4==c5 && c5==c6)||(c7==c8 && c8==c9)){
        return 1;
    }
    if((c1==c4&& c4==c7)||(c2==c5 && c5==c8)||(c3==c6 && c6==c9)){
        return 1;
    }
    if((c1==c5&& c5==c9)||(c3==c5 && c5==c7)){
        return 1;
    }   
}
int main(){
    draw();
    int i;
    for(i=0;i<9;i++){
        move(i);
        draw();
        int win=checkwinner();
        if(win==1){
            if(i%2==0){
                printf("x wins the game\a");
                while(1){
                     printf("\a");
                 }
                return 0;
            }else{
                printf("o wins the game");
                while(1){
                      printf("\a");
                }
                return 0;
            }
        }
    }
    printf("\ndraw");
    
    return 0;
}
#include <stdio.h>

int main()
{
	int num=2546;
	int y=num;
	int a=num%10;
	num=num/10;
	int b=num%10;
	num=num/10;
	int c=num%10;
	num=num/10;
	int d=num%10;
	label:
    printf("Rules of the game\n");
    printf("1. you have to guess a 4 digit number\n");
    printf("2. if you guess a number correctly and it is at the right place then you will get 10 points\n");
    printf("3. if you guess a number correctly but it is not at the right place then you will get 2 points\n");
    printf("4. you have only 10 chances to guess the number\n");
    printf("5. if you guess the number correctly then you will get a message that you have guessed it right\n");
	printf("Enter your first guess\n");
	int i=0;
	while(i<10) {
		int x;
		scanf("%d",&x);
		int j=0;
		int count =0;
		while(j<4) {
			int p=x%10;
			if(j==0&&p==a) {
				count=count+10;
			} else if(j==0&&(p==b||p==c||p==d)) {
				count=count+2;
			}
			if(j==1&&p==b) {
				count=count+10;
			} else if(j==1&&(p==a||p==c||p==d)) {
				count=count+2;
			}
			if(j==2&&p==c) {
				count=count+10;
			} else if(j==2&&(p==a||p==b||p==d)) {
				count=count+2;
			}
			if(j==3&&p==d) {
				count=count+10;
			} else if(j==3&&(p==a||p==b||p==c)) {
				count=count+2;
			}
			x=x/10;
			j=j+1;

		}
		if(count==40) {
			printf("heyy!! you have guessed it right\n");
			printf("do you wanna try again? press 1 to play again or 0 to exit\n");
			int q;
			scanf("%d",&q);
			switch(q){
			    case 0:printf("it seems that you are not intrested in the game\n okay then good bye...");
			           return 0;
			    case 1:goto label;
			}
			
			break;
		} else {
		    if(i==10){
		        printf("if you want to try again press 1");
		        int q;
		        scanf("%d",&q);
		        switch(q){
		        case 0:printf("it seems that you are not intrested in the game\n okay then good bye...");
			           return 0;
			    case 1:goto label;
		            
		        }
		    }
			printf("try again and your score is %d\n",count);
		}
		i=i+1;
	}

	return 0;
}

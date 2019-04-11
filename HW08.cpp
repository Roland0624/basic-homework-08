#include<stdio.h>
#include<stdlib.h>


int main(void){
	int number=2;                            //從2開始除，判斷是否為質數，number為因數 
	int x;                                //1-x個質數 
	printf("1-x質數，請輸入x:");         //顯示至螢幕 
	scanf("%d、",&x);                   //key in 
	for(int i=2;i<=x;i++){              //執行2-x的循環 
		if(i==2){                       //2是質數 
			printf("%d",i);
			printf(" ");
			continue;
		}
		while(i%number!=0&&number<=i){            //當i%number!=0及number<=0都成立時循環 
			number+=1;                                 //number+1			
			if(number/i==1){                          //因數只有本身為質數 
				printf("%d",i);
				printf(" ");
				number=2;
				break;
			} 
			if(i%number==0){                         //因數有其他數字不為質數 
				number=2;
				break;
			}	
		}
	}
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>


int main(void){
	int number=2;                            //�q2�}�l���A�P�_�O�_����ơAnumber���]�� 
	int x;                                //1-x�ӽ�� 
	printf("1-x��ơA�п�Jx:");         //��ܦܿù� 
	scanf("%d�B",&x);                   //key in 
	for(int i=2;i<=x;i++){              //����2-x���`�� 
		if(i==2){                       //2�O��� 
			printf("%d",i);
			printf(" ");
			continue;
		}
		while(i%number!=0&&number<=i){            //��i%number!=0��number<=0�����߮ɴ`�� 
			number+=1;                                 //number+1			
			if(number/i==1){                          //�]�ƥu����������� 
				printf("%d",i);
				printf(" ");
				number=2;
				break;
			} 
			if(i%number==0){                         //�]�Ʀ���L�Ʀr������� 
				number=2;
				break;
			}	
		}
	}
	system("pause");
	return 0;
}

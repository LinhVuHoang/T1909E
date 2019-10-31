#include<stdio.h>
int main(){
	do{
		int n;
		bool cs = true;
		while(cs){
		printf("chon chuc nang : \n");
		printf("1. chon mon an \n");
		printf("2 . chon do uong \n");
		printf("3.thanh toan\n");
		printf("4. thoat \n");
		scanf("%d",n);		
	}while(n<1 || n>4);
	switch(n){
		case 1:{
			int choose;
			bool cs1=true;
			while(cs1){
			do{
			printf("chon mon an : \n");
			printf("1 . bo\n");
			printf(" 2. ga\n");
			printf(" 3.vit \n");
			printf("4. quay lai menu\n");
			scanf("%d",&choose);
		}while(choose<1 || choose > 4);
		if(choose ==1){
			printf("chon mon bo\n");
		}else if(choose==2){
			printf("chon mon ga\n");
		}else if(choose==3){
			printf("chon mon vit\n");
		}else if(choose==4){
			cs1= false;
		}
	}break;
}
			case2:{
			int choose2;
			bool cs2=true;
			while(cs2){
			do{
			printf("chon mon an : \n");
			printf("1 . bia\n");
			printf(" 2. nuoc ngot\n");
			printf(" 3. sinh to \n");
			printf("4. quay lai menu\n");
			scanf("%d",&choose2);
		}while(choose2<1 || choose2 > 4);
		if(choose2 ==1){
			printf("chon mon bo\n");
		}else if(choose2==2){
			printf("chon mon ga\n");
		}else if(choose2==3){
			printf("chon mon vit\n");
		}else if(choose2==4){
			cs2= false;
		}
}break;
}
case3 :{
printf("tinh tien : 30000\n");break;}
case4:{
  cs=false;break;
}
}
}
return 0;
}

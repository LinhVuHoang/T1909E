#include<stdio.h>
#include<string.h>
void chuyenVietHoa(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
		}
	}
}
void inracacchuoi(char s[][20],int n){
	for(int i=0;i<n;i++){
		printf("chuoi %d la: %s\n",i,s[i]);
	}
}
int main(){
	char str[20],s1[20];
	int ar[10];
	char s3[5][20];
	for(int i=0;i<5;i++){
		scanf("%s",s3[i]);
	}
	inracacchuoi(s3,5);
	printf("nhap chuoi: \n");
	 scanf("%s",str); //tuong duong gets(str);
	printf("nhap chuoi: \n");
	scanf("%s",s1);
	chuyenVietHoa(str);
	printf("do dai chuoi str: %lu\n",strlen(str)); //xac dinh do dai chuoi strlen(chuoi)
	printf("do dai chuoi s1:%lu\n",strlen(s1));
	printf("chuoi dao nguoc cua str: \n");
	for(int i=strlen(str)-1;i>=0;--i){
		printf("%c",str[i]);
	}
	printf("\n");
	printf("so sanh str va s1:%d\n",strcmp(str,s1)); //so sanh 2 chuoi bang cach quy doi ra so roi tru di strcmp();
	printf("vi tri cua ky tu l trong str: %lu \n",strchr(str,'l')-str); //tim vi tri cua ky tu trong chuoi strchr(a,'ky tu')-a;
	strcat(str,s1); //noi 2 chuoi lai vs nhau
	printf("chuoi vua nhap la:%s \n",str);
printf("chuoi s1 vua nhap la :%s \n",s1);
	strcat(s1,str);
	printf("chuoi vua nhap la:%s \n",str);
printf("chuoi s1 vua nhap la :%s \n",s1);
	strcpy(str,s1); //copy chuoi sau vao chuoi dung truoc
	printf("chuoi vua nhap la:%s \n",str);
 // tuong duong puts(str);
printf("chuoi s1 vua nhap la :%s \n",s1);
	return 0;
}

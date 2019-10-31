#include<stdio.h>
typedef struct sinhvien{
	char tensv[50];
	int tuoi;
	int diem_thi;
}svv;
int main(){
	struct sinhvien sv1;
	svv sv2;
	sv1.tuoi =20;
	printf("nhap ten sv:\n");
	scanf("%s",sv1.tensv);
	printf("nhap tuoi sv:\n");
	scanf("%d",&sv1.tuoi);
	printf("nhap diem thi:\n");
	scanf("%d",&sv1.diem_thi);
	struct sinhvien mang_sv[30];
	for(int i=0;i<30;i++){
	    	printf("nhap ten sv:\n");
	scanf("%s",mang_sinhvien[i].tensv);
	printf("nhap tuoi sv:\n");
	scanf("%d",&mang_sinhvien[i].tuoi);
	printf("nhap diem thi:\n");
	scanf("%d",&smang_sinhvien[i].diem_thi);
	}
	//con tro
	struct sinhvien *controsv;
	controsv=(struct sinhvien*)malloc(30*sizeof(struct sinhvien));
	for(int i=0;i<30;i++)
	{printf("nhap ten:\n");
	scanf("%s",(controsv+i)->tensv);
	printf("nhap tuoi: \n");
	scanf("%d",&(controsv+i)->tuoi);
	printf("nhap diem thi:\n");
	scanf("%d",&(controsv+i)->diem_thi); ty
	}
	return 0;
}

#include <stdio.h>
//Program Daftar Penerima Bantuan
struct penerima{
	char nama[50];
	unsigned int bantuan;
};

typedef struct penerima Data;

int main(){
	int i,j;
	
	printf("Masukkan jumlah penerima bantuan : "); scanf("%d",&j);
	
	Data dt[j];
	
	for(i=0;i<j;i++){
		printf("Data penerima ke : %d\t Nama : ",i+1); scanf("%s",&dt[i].nama);
		printf("Bantuan yang diberikan : "); scanf("%d",&dt[i].bantuan);
	}
	printf("\nDaftar Penerima :\n");
	for(i=0;i<j;i++){
		printf("Data penerima ke : %d\t",i+1); printf("%s\t",dt[i].nama); printf("Rp%d\n",dt[i].bantuan); 
	}
	
	return 0;
}

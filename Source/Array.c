#include <stdio.h>
main(){
	
	int pilihan,daftar;
	
	char motor[225][255] = {"Yamaha R6","Kawasaki H2","Ducati Panigale 1199"}; 
	
	printf("---------------------------------\n");
	printf("       Daftar Motor Sport \n");
	printf("---------------------------------\n\n");
	
	for(daftar = 0 ; daftar <= 2 ; daftar++){
		printf("%d. %s\n",daftar,motor[daftar]);
	}
	
	printf("\nMasukan Nomor Motor : ");
	scanf("%d",&pilihan);
	
	system("pause");
}

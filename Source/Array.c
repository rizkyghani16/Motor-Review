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
	
	if(pilihan == 0){
		system("cls");
		system("color 0a");
		printf("+=================================================+\n");
		printf("Motor yang anda pilih adalah : %s",motor[pilihan]);
		printf("\n+=================================================+\n");
		printf("\nSpesifikasi :\n\n");
		
		printf("MESIN\n",motor[pilihan]);
		printf("Engine type : liquid-cooled, 4-stroke, DOHC, forward-inclined parallel 4-cylinder, 4-valves\n",motor[pilihan]);
		printf("Displacement : 599cc\n",motor[pilihan]);
		
	system("pause");
}

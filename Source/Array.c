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
		printf("Bore x stroke : 67.0 mm x 42.5 mm\n",motor[pilihan]);
		printf("Compression ratio : 13.1 : 1\n",motor[pilihan]);
		printf("Maximum power : 91.0 kW (123.7PS) @ 14,500 rpm\n",motor[pilihan]);
		printf("Maximum torque : 65.7 Nm (6.7 kg-m) @ 10,500 rpm\n",motor[pilihan]);
		
		
	system("pause");
}

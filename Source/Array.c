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
		printf("Lubrication system : Wet sump\n",motor[pilihan]);
		printf("Fuel system : Electronic Fuel Injection\n",motor[pilihan]);
		printf("Clutch type : Wet, multiple-disc coil spring\n",motor[pilihan]);
		printf("Ignition system : TCI (digital)\n",motor[pilihan]);
		printf("Starter system : Electric\n",motor[pilihan]);
		printf("Transmission system : Constant Mesh, 6-speed\n",motor[pilihan]);
		printf("Final transmission : Chain\n\n",motor[pilihan]);
		
		printf("CHASSIS\n",motor[pilihan]);
		printf("Suspension / Front : 41mm inverted fork; 4-way adjustable, 4.5-in travel\n",motor[pilihan]);
		printf("Suspension / Rear : Single shock; 4-way adjustable, 4.7-in travel\n",motor[pilihan]);
		printf("Brakes / Front Dual : 310mm floating disc; radial-mount 4-piston calipers\n",motor[pilihan]);
		printf("Brakes / Rear : 220mm disc; single-piston caliper\n",motor[pilihan]);
		
	system("pause");
}

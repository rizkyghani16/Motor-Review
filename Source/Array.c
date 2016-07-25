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
		printf("Tires / Front : 120/70-ZR17 58W\n",motor[pilihan]);
		printf("Tires / Rear : 180/55-ZR17 73W\n\n",motor[pilihan]);
		
		printf("DIMENSI\n",motor[pilihan]);
		printf("Panjang 80.3 in x Lebar 27.8 in x Tinggi 43.1 in\n",motor[pilihan]);
		printf("Jarak Sumbu Roda : 54.1 in\n",motor[pilihan]);
		printf("Kapasitas Tangki : 17 liter\n\n",motor[pilihan]);
	}
	else if(pilihan == 1){
		system("cls");
		system("color 0c");
		printf("+=================================================+\n");
		printf("Motor yg anda pilih adalah : %s",motor[pilihan]);
		printf("\n+=================================================+\n");
		printf("\nReview :\n\n");
		
		printf("MESIN\n",motor[pilihan]);
		printf("Engine type : DOHC, 16 valves Liquid-cooled, 4-stroke In-Line Four\n",motor[pilihan]);
		printf("Displacement : 998 cc\n",motor[pilihan]);
		printf("Bore x stroke : 76.0 x 55.0 mm\n",motor[pilihan]);
		printf("Compression ratio : 8.5:1\n",motor[pilihan]);
		printf("Maximum power : 147.2 kW {200 PS} / 10,000 rpm\n",motor[pilihan]);
		printf("Maximum torque : 140.4 N.m {14.3 kgf.m} / 10,000 rpm\n",motor[pilihan]);
		printf("Lubrication system : Wet sump\n",motor[pilihan]);
		printf("Fuel system : Fuel injection: 50 mm x 4 with dual injection\n",motor[pilihan]);
		printf("Clutch type : Wet, multiple-disc coil spring\n",motor[pilihan]);
		printf("Ignition system : TCI (digital)\n",motor[pilihan]);
		printf("Starter system : Electric\n",motor[pilihan]);
		printf("Transmission system : Constant Mesh, 6-speed\n",motor[pilihan]);
		printf("Final transmission : Chain\n\n",motor[pilihan]);
		
		printf("CHASSIS\n",motor[pilihan]);
		printf("Suspension / Front : 43 mm inverted fork\n",motor[pilihan]);
		printf("Suspension / Rear : New Uni-Trak with gas-charged shock\n",motor[pilihan]);
		printf("Brakes / Front Dual : Dual semi-floating 330 mm discs\n",motor[pilihan]);
		printf("Brakes / Rear : Single 250 mm disc\n",motor[pilihan]);
		printf("Tires / Front : 120/70ZR17M/C (58W)\n",motor[pilihan]);
		printf("Tires / Rear : 200/55ZR17M/C (78W)\n\n",motor[pilihan]);
		
		printf("DIMENSI\n",motor[pilihan]);
		printf("Panjang 2,085 mm x Lebar 770 mm x Tinggi 1,125 mm\n",motor[pilihan]);
		printf("Jarak Sumbu Roda : 1,455 mm\n",motor[pilihan]);
		printf("Kapasitas Tangki : 17 Liter\n\n",motor[pilihan]);
	}
	
	else if(pilihan == 2){
		system("cls");
		system("color 09");
		printf("+=================================================+\n");
		printf("Motor yg anda pilih adalah : %s",motor[pilihan]);
		printf("\n+=================================================+\n");
		printf("\nReview :\n\n");
		
		printf("MESIN\n",motor[pilihan]);
		printf("Engine type : Superquadro: L-twin cylinder, 4 valve per cylinder, Desmodromic, liquid cooled\n",motor[pilihan]);
		printf("Displacement : 1198cc\n",motor[pilihan]);
		printf("Bore x stroke : 112x60.8mm\n",motor[pilihan]);
		printf("Compression ratio : 12.5:1\n",motor[pilihan]);
		printf("Maximum power : 143 kW (195 hp) @ 10,750 rpm\n",motor[pilihan]);
		printf("132 Nm (98.1 lb-ft) @ 9,000 rpm\n",motor[pilihan]);
		printf("Lubrication system : Wet sump\n",motor[pilihan]);
		printf("Fuel system : Mitsubishi electronic fuel injection system. Twin injectors per cylinder. Full ride-by-wire elliptical throttle bodies.\n",motor[pilihan]);
		printf("Clutch type : Slipper and self-servo wet multiplate clutch with hydraulic control\n",motor[pilihan]);
		printf("Ignition system : TCI (digital)\n",motor[pilihan]);
		printf("Starter system : Electric\n",motor[pilihan]);
		printf("Transmission system : 6 speed\n",motor[pilihan]);
		printf("Final transmission : Chain 525; Front sprocket 15; Rear sprocket 39\n\n",motor[pilihan]);
		
	system("pause");
}

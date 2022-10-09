#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

 
int main(){
	
	int tas   = 1;
	int kagit = 2;
	int makas = 3;
	int oyuncu = 0;
	int bilgisayar =0;
    int secim;
	
	srand(time(NULL));
	printf("tas:1 kagit:2 makas:3\n");
	
	while(bilgisayar < 2 && oyuncu < 2){
		
	printf("\nsecimini yap: ");
	scanf("%d",&secim);
	
	if(secim==1){
		
		int pcsecim = rand() % 3+1;
		//printf("pc = %d\n",pcsecim);
		
		if(pcsecim==1){
			printf("PC tas yapti ve berabere bitti\n");
			printf("bir daha dene\n");
			printf("oyuncu = %d pc = %d\n",oyuncu,bilgisayar);
		}
		else if(pcsecim==2){
			printf("PC kagit yapti ve kazandi\n");
			bilgisayar++;
			printf("oyuncu = %d pc = %d\n",oyuncu,bilgisayar);
		}
		else if(pcsecim==3){
			printf("PC makas yapti\n");
			printf("oyuncu kazandi\n");
			oyuncu++;
			printf("oyuncu = %d pc = %d\n",oyuncu,bilgisayar);
		}
		
	} 
	if(secim==2){
		
		int pcsecim = rand() % 3+1;
		//printf("pc = %d\n",pcsecim);
		
		if(pcsecim==1){
			printf("PC tas yapti\n");
			printf("oyuncu kazandi\n");
			oyuncu++;
			printf("oyuncu = %d pc = %d\n",oyuncu,bilgisayar);
		}
		else if(pcsecim==2){
			printf("PC kagit yapti ve berabere bitti\n");
			printf("bir daha dene\n");
			printf("oyuncu = %d pc = %d\n",oyuncu,bilgisayar);
			
		}
		else if(pcsecim==3){
			printf("PC makas yapti ve kazandi\n");
			bilgisayar++;
			printf("oyuncu = %d pc = %d\n",oyuncu,bilgisayar);
		}
		
	}
		if(secim==3){
		
		int pcsecim = rand() % 3+1;
		//printf("pc = %d\n",pcsecim);
		
		if(pcsecim==1){
			printf("PC tas yapti ve kazandi\n");
			bilgisayar++;
			printf("oyuncu = %d pc = %d\n",oyuncu,bilgisayar);
		}
		else if(pcsecim==2){
			printf("PC kagit yapti\n");
			printf("oyuncu kazandi\n");
			oyuncu++;
			printf("oyuncu = %d pc = %d\n",oyuncu,bilgisayar);
			
		}
		else if(pcsecim==3){
			printf("PC makas yapti ve berabere bitti\n");
			printf("oyuncu = %d pc = %d\n",oyuncu,bilgisayar);
	    	}
		
    	}
		
	}
	
	if(oyuncu > bilgisayar){
		for(int i=0;i<5;i++){
			system("color 1");
			system("color 2");
			system("color 3");
			system("color 4");
		}
	    
		printf("\nTEBRIKLER KAZANDINIZ\a");
	}
	else{
		system("color 6");
		printf("\nPC KAZANDI\a");
	}
	
	return 0;
}
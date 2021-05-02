#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	//standart sapma bulucaz
	int uzunluk;
	printf("Kac sayinin standart sapmasi alinicak?....");
	scanf("%d",&uzunluk);
	float dizi[uzunluk];
	
	int i;
	for(i=0;i<uzunluk;i++){
		printf("%d. elamani  giriniz:",i+1);
		scanf("%f",&dizi[i]);
	}
	
	//ortalamyý bulalým.
	float toplam=0,ortalama=0;
	for(i=0;i<uzunluk;i++){
		toplam=toplam+dizi[i];
	}
	ortalama=toplam/uzunluk;
	
	printf("Girilen elemanlarin ortalamasi: %f\n\n",ortalama);
	
	float temp=0,Ssapma=0;
	
	for(i=0;i<uzunluk;i++){
		temp=temp+(dizi[i]-ortalama)*(dizi[i]-ortalama);
	}
	
	//standart sapma hesapla
	Ssapma=sqrt(temp/(uzunluk-1));
	
	printf("Standart sapma:%f",Ssapma);
	
	
	
	
	
	
	
	
}

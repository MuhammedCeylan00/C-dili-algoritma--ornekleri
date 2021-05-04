#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
    //kullanýcý kelime girsin kelimedeki sesli harf sayýsý
    
    
    char kelime[100];
    int uzunluk=0;
    char harf;
    int sayac=0;
    
    printf("Kelime giriniz  (lutfen turce karakter kullanmayiniz.)..");
    scanf("%s",&kelime);
    
    uzunluk=strlen(kelime);
    int n;
    for(n=0;n<uzunluk;n++){
    	harf=kelime[n];
    	if(harf>='a' && harf<='z'){
    		harf=harf-32;//kucuk a nin buyuk a ya cevirilmesi.ASCII tablosu.
	    }
	if(harf=='A' || harf=='E' || harf=='O' || harf=='U' || harf=='I'){
		sayac++;
		
	}
	
    }
    
    printf("Girilen kelimede %d sesli harf vardir.",sayac);
    	
}

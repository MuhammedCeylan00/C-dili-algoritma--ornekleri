#include<stdio.h>
#include<stdlib.h>

int main(){
       //Bankamatik uygulamasý
       //para yaýrma
       //para çekme
       //çýkýþ
       //mesaj 
       
       int bakiye=1000,kosul,cektutar,yatirtutar;
       
       printf("********SÝSTEME HOSGELDINIZ********\n\n\n");
       
       printf("bakiyeniz:%d\n\n",bakiye);
       while(1){
       	printf("para cekmek icin '1' e basiniz...\n");
       printf("para yatirmak icin '2' e basiniz...\n");
       printf("cikis icin '3' e basiniz...\n");
       scanf("%d",&kosul);
       
       
       if(kosul==1 ){
       	if(bakiye>0){
       		printf("cekemk istediginiz tutar:");
       	scanf("%d",&cektutar);
       	if(bakiye<cektutar){
       		printf("bakiye yetersiz..\n");
		  }
		  else{
		  	bakiye=bakiye-cektutar;
       	printf("yeni bakiyeniz:%d",bakiye);
		  }
       	
		  }else{
		  	printf("bakiyeniz yetersiz!!\n");
		  }
       	
	  }
	  else if(kosul==2){
	  	printf("yatirmak istediginiz tutari giriniz:");
	  	scanf("%d",&yatirtutar);
	  	bakiye=bakiye+yatirtutar;
	  	printf("yeni bakiyeniz:%d\n",bakiye);
	  }
	  else if(kosul==3){
	  	printf("Bizi tercih ettiginiz icin tesekkür ederiz.");
	  	break;
	  }
	  else{
	  	printf("Hatali giris!!!");
	  }
	  }
	  
	  
	  
       
       
       
       
       
       
       
       
	
}

#include <stdio.h>
// klavyeden girilen sayının asal çarpanlarını ekrana yazdır
// örneğin input: 30 için
//        output: 2 3 5 

int main()

{ 
 
 int sayi;   
 int i;
    
 printf("asal çarpanlarını bulmak istediğiniz sayıyı girin: ");	
 scanf("%d",&sayi); 
            
 for(i = 2 ; sayi > 1 ; i++)      
 {
  while(sayi % i == 0)                       
  {                                                                            
   printf("%d ",i);                                                                                     
   sayi = sayi / i;                                             
  }
 }
 
 return 0;
  
}
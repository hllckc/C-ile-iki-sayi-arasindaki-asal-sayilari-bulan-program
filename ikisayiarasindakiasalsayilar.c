#include <stdio.h>

void asallar(int,int);
//2, 3, 5, 7, 11, 13...
int main(int argc, char const *argv[])
{
	int baslangic,bitis;
	printf("Baslangic degerini giriniz :");
	scanf("%d",&baslangic);
	printf("Bitis degerini giriniz :");
	scanf("%d",&bitis);

    asallar(baslangic,bitis);

	return 0;
}

void asallar(int baslangic,int bitis){
	int flag=1;

	for(int i=baslangic;i<=bitis;++i){
           if(i<=1)
           continue;
           
          for(int j=2;j<=i/2;++j){
          	if(i%j==0)
          		flag=0;
          }
          if(flag==1)
          	printf("%d ",i);
          flag=1;
    }

}
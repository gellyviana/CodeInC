#include <stdio.h>

int main ( ){
	
	int c_100=0, c_50=0, c_10=0, c_5=0, c_1=0, valor_f=0, valor_i=0, cent5=0, cent10=0, cent25=0, cent50=0;
	float valor2=0.0;
	printf ("Digite um valor em reais: ");
	scanf ("%f", &valor2);
	
	valor_i =(int) valor2;
	valor_f = (valor2 - valor_i)*100;
	
	do{
		if(valor2 >= 100){
		valor2 -= 100;
		c_100 ++;
		}
		else if (valor2 >= 50){
		valor2 -= 50;
		c_50 ++;
		}
		else if(valor2 >= 10){
		valor2 -= 10;
		c_10 ++;
		}
		else if (valor2 >= 5){
		valor2 -= 5;
		c_5++;	
		}
		else if (valor2>= 1){
		valor2 -= 1;
		c_1++;
		}
	}while (valor2 >= 1);
	
	do{
		if (valor_f >= 50)
		{
			valor_f -= 50;
			cent50 ++;
		}
		else if (valor_f >= 25)
		{
			valor_f -= 25;
			cent25 ++;
		}
		else if (valor_f >= 10)
		{
			valor_f -= 10;
			cent10 ++;
		}
		else{
			valor_f -= 5;
			cent5 ++;
		}
	}while(valor_f != 0);

	switch(c_100){
		case 1: printf("Cento");break;
		case 2: printf("Duzentos");break;
		case 3: printf("Trezentos");break;
		case 4: printf ("quatrocentos "); break;
		case 5: printf ("quinhentos "); break;
		case 6: printf ("seiscentos "); break;
		case 7: printf ("setecentos "); break;
		case 8: printf ("oitocentos "); break;
		case 9: printf ("novecentos "); break;
	}
	switch(c_50){
		case 2: printf ("vinte "); break;
		case 3: printf ("trinta "); break;
		case 4: printf ("quarenta "); break;
		case 5: printf ("cinquenta "); break;
		case 6: printf ("sessenta "); break;
		case 7: printf ("setenta "); break;
		case 8: printf ("oitenta "); break;
		case 9: printf ("noventa "); break;
	}
	switch(c_10){
		case 0: printf ("dez "); break;
		case 1: printf ("onze");break;
		case 2: printf ("doze "); break;
		case 3: printf ("treze "); break;
		case 4: printf ("quatorze "); break;
		case 5: printf ("quinze "); break;
		case 6: printf ("dezeseis "); break;
		case 7: printf ("dezesete "); break;
		case 8: printf ("dezoito "); break;
		case 9: printf ("dezenove "); break;
	}	
	switch (c_5){
		case 1: printf ("um "); break;
		case 2: printf ("dois "); break;
		case 3: printf ("tres "); break;
		case 4: printf ("quatro "); break;
		case 5: printf ("cinco "); break;
		case 6: printf ("seis "); break;
		case 7: printf ("sete "); break;
		case 8: printf ("oito "); break;
		case 9: printf ("nove "); break;
	}
	switch (cent50){
		case 2: printf ("vinte "); break;
		case 3: printf ("trinta "); break;
		case 4: printf ("quarenta "); break;
		case 5: printf ("cinquenta "); break;
		case 6: printf ("sessenta "); break;
		case 7: printf ("setenta "); break;
		case 8: printf ("oitenta "); break;
		case 9: printf ("noventa "); break;
	}
	switch (cent25){
		case 0: printf ("dez "); break;
		case 1: printf ("onze");
		case 2: printf ("doze "); break;
		case 3: printf ("treze "); break;
		case 4: printf ("quatorze "); break;
		case 5: printf ("quinze "); break;
		case 6: printf ("dezeseis "); break;
		case 7: printf ("dezesete "); break;
		case 8: printf ("dezoito "); break;
		case 9: printf ("dezenove "); break;
	}
	switch (cent10){
		case 1: printf ("um "); break;
		case 2: printf ("dois "); break;
		case 3: printf ("tres "); break;
		case 4: printf ("quatro "); break;
		case 5: printf ("cinco "); break;
		case 6: printf ("seis "); break;
		case 7: printf ("sete "); break;
		case 8: printf ("oito "); break;
		case 9: printf ("nove "); break;
	}
	return 0;	
}
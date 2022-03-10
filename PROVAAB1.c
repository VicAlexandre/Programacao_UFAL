#include <stdio.h>

int main(){
    int pedro, tulio, gabriel, yanka, paloma, vinicius, elias, contadorcasa1 = 0, contadorcasa2 = 0, contadorcasa3 = 0, pagamentocasa1, pagamentocasa2, pagamentocasa3;

    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", &pedro, &tulio, &gabriel, &yanka, &paloma, &vinicius, &elias);
    
    if (pedro - 7200 > 0){
        if (pedro - 7200 >= 1000){
            contadorcasa1++;
            contadorcasa3++;
    }
        if (pedro - 7200 >= 200) contadorcasa2++; 
}

    if (tulio - 4400 > 0){
        if (tulio - 4400 >= 400) contadorcasa1++;
        if (tulio - 4400 >= 800) contadorcasa2++;
        if (tulio - 4400 >= 1600) contadorcasa3++;
    }

    if (gabriel - 5200 > 0){
        if (gabriel - 5200 >= 400) contadorcasa1++;
        if (gabriel - 5200 >= 1200) contadorcasa2++;
        if (gabriel - 5200 >= 2000) contadorcasa3++;
    }

    if (yanka - 4000 > 0){
        if (yanka - 4000 >= 400) contadorcasa1++;
        if (yanka - 4000 >= 800) contadorcasa2++;
        if (yanka - 4000 >= 1200) contadorcasa3++;
    }

    if (paloma - 4400 > 0){
        if (paloma - 4400 >= 400) contadorcasa1++;
        if (paloma - 4400 >= 1200){ 
            contadorcasa2++; 
            contadorcasa3++;}
        }

    if (vinicius - 4800 > 0){
        if (vinicius - 4800 >= 400){
            contadorcasa1++;
            contadorcasa3++;
        }
        if (vinicius - 4800 >= 1200) contadorcasa2++;
    }

    if (elias - 6600 > 0){
        if (elias - 6600 >= 1000){
            contadorcasa1++;
            contadorcasa3++;
        }
        if (elias - 6600 >= 1800) contadorcasa2++;
    }

    pagamentocasa1 = contadorcasa1 * 10;
    pagamentocasa2 = contadorcasa2 * 20;
    pagamentocasa3 = contadorcasa3 * 30;

    if (contadorcasa1 == 0 && contadorcasa2 == 0 && contadorcasa3 == 0) printf("NAO TERA SHOW!");

    else if (pagamentocasa1 > pagamentocasa2 && pagamentocasa1 > pagamentocasa3){
        printf("CASA 1\n%d\n%d", pagamentocasa1, contadorcasa1);
    }
    else if (pagamentocasa2 > pagamentocasa1 && pagamentocasa2 > pagamentocasa3){
        printf("CASA 2\n%d\n%d", pagamentocasa2, contadorcasa2);
    }
    else if (pagamentocasa3 > pagamentocasa1 && pagamentocasa3 > pagamentocasa2){
        printf("CASA 3\n%d\n%d", pagamentocasa3, contadorcasa3);
    }
    else if (pagamentocasa1 == pagamentocasa2 && pagamentocasa2 == pagamentocasa3){
        printf("CASA 1\n%d\n%d", pagamentocasa1, contadorcasa1);
    }
    else if (pagamentocasa2 == pagamentocasa3 && pagamentocasa2 > pagamentocasa1) printf("CASA 2\n%d\n%d", pagamentocasa2, contadorcasa2);

    else if (pagamentocasa1 == pagamentocasa3 && pagamentocasa1 > pagamentocasa2) printf("CASA 1\n%d\n%d", pagamentocasa1, contadorcasa1);
}
#include <stdio.h>

void main(){
    int a = 0, b = 0, c = 0, d = 0, pGols = 0, sGols = 0;
    char pTime = 'a', sTime;

    while (pTime == 'a' || pTime == 'b' || pTime == 'c' || pTime == 'd'){
        printf("Escolha o primeiro time para o campeonato: \n");
        scanf(" %c", &pTime);

        if (pTime != 'a' && pTime != 'b' && pTime != 'c' && pTime != 'd'){
            break;
        }
        printf("Escolha o segundo time para o campeonato: \n");
        scanf(" %c", &sTime);

        printf("Indique a quantidade de gols do primeiro time: \n");
        scanf("%d", &pGols);

        printf("Indique a quantidade de gols do segundo time: \n");
        scanf("%d", &sGols);

        if (pTime == 'a' && sTime == 'b'){
            if (pGols > sGols){
                a += 3;
            } else if(sGols > pGols){
                b += 3;
            } else if(pGols == sGols){
                a += 1;
                b += 1;
            }
        }

        if (pTime == 'b' && sTime == 'a'){
            if (pGols > sGols){
                b += 3;
            } else if(sGols > pGols){
                a += 3;
            } else if(pGols == sGols){
                a += 1;
                b += 1;
            }
        }

        if (pTime == 'a' && sTime == 'c'){
            if (pGols > sGols){
                a += 3;
            } else if(sGols > pGols){
                c += 3;
            } else if(pGols == sGols){
                a += 1;
                c += 1;
            }
        }

        if (pTime == 'c' && sTime == 'a'){
            if (pGols > sGols){
                c += 3;
            } else if(sGols > pGols){
                a += 3;
            } else if(pGols == sGols){
                a += 1;
                c += 1;
            }
        }

        if (pTime == 'a' && sTime == 'd'){
            if (pGols > sGols){
                a += 3;
            } else if(sGols > pGols){
                d += 3;
            } else if(pGols == sGols){
                a += 1;
                d += 1;
            }
        }

        if (pTime == 'd' && sTime == 'a'){
            if (pGols > sGols){
                d += 3;
        }

        if (pTime == 'b' && sTime == 'a'){
            if (pGols > sGols){
                b += 3;
                b += 1;
                c += 1;
            }
        }

        if (pTime == 'c' && sTime == 'b'){
            if (pGols > sGols){
                c += 3;
            } else if(sGols > pGols){
                b += 3;
            } else if(pGols == sGols){
                b += 1;
                c += 1;
            }
        }

        if (pTime == 'b' && sTime == 'd'){
            if (pGols > sGols){
                b += 3;
            } else if(sGols > pGols){
                d += 3;
            } else if(pGols == sGols){
                b += 1;
                d += 1;
            }
        }

        if (pTime == 'd' && sTime == 'b'){
            if (pGols > sGols){
                d += 3;
            } else if(sGols > pGols){
                b += 3;
            } else if(pGols == sGols){
                b += 1;
                d += 1;
            }
        }

        if (pTime == 'c' && sTime == 'd'){
            if (pGols > sGols){
                c += 3;
            } else if(sGols > pGols){
                d += 3;
            } else if(pGols == sGols){
                c += 1;
                d += 1;
            }
        }

        if (pTime == 'd' && sTime == 'c'){
            if (pGols > sGols){
                d += 3;
            } else if(sGols > pGols){
                c += 3;
            } else if(pGols == sGols){
                d += 1;
                c += 1;
            }
        }

    }

    if (a > b && a > c && a > d){
        printf("Campeao é o Time A\n");
    } else if(b > a && b > c && b > d){
        printf("Campeao é o Time B\n");
    } else if(c > a && c > b && c > d){
        printf("Campeao é o Time C\n");
    } else if(d > a && d > b && d > c){
        printf("Campeao é o Time D\n");
    } else {
        printf("Não houve campeão, teve um empate\n");
    }

    printf("Times: ");
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("C: %d\n", c);
    printf("D: %d\n", d); 

}

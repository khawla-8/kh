#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("entrer n entre 1et7:");
    scanf("%d",&n);
    switch(n){
    case 1:printf("lundi");
    break;
    case 2:printf("mardi");
    break;
    case 3:printf("mercredi");
    break;
    case 4:printf("jeudi");
    break;
    case 5:printf("vendredi");
    break;
    case 6:printf("samedi");
    break;
    case 7:printf("dimanche");
    break;
    default:printf("le nombre est incorrect");
    break;
    }
  return 0;
}
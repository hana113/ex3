
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main (){
    int code;
    float a,b,c ;
    printf("Veuillez choisir un code dentrée: ");
    printf("Entrer 1 pour le triangle ");
    printf("Entrer 2 pour le carre " );
    printf("Entrer 10 pour le cercle");
    printf("Entrer  3 pour le cube");
    printf("Entrer 11 pour le cylindre");
    printf("Entrer  12 pour la sphere");
    printf("Veuillez entrer le code choisi  : ");
    scanf("%d",&code);
    
	switch (code) { 
        
		case 1 : // Triangle
            printf("Saisissez les mesure des cotes du triangle :");
            scanf("%f%f%f", &a, &b, &c);
            printf("Nom de la figure : Triangle");
            printf("Nombre de cotes du triangle : 3");
            printf("Circonference : %.2f", a + b + c);
            printf("Aire : %.2f", (a * b) / 2);
            printf("Volume : 0");
        break ; 
        
        case 2 :// Carre
        	printf("Saisissez la mesure des cotes du carre :");
            scanf("%f", &a);
            printf("Nom de la figure : Carre");
            printf("Nombre de cotecs du carre : 4");
            printf("Circonference : %.2f", 4 * a);
            printf("Aire : %.2f", pow(a,2) );
            printf("Volume : 0");
        break ;
        
        case 10 : // cercle
        	printf("Saisissez la mesure du rayon du cercle :");
            scanf("%f", &a);
            printf("Nom de la figure : Cercle");
            printf("Nombre de cotecs du cercle : 0");
            printf("Circonference : %.2f", 2 * PI * a);
            printf("Aire : %.2f", PI * pow (a,2) );
            printf("Volume : 0");
        break ;
        
        case 3 : // cube
        	printf("Saisissez la mesure dun cote du cube :");
            scanf("%f", &a);
            printf("Nom de la figure : Cube");
            printf("Nombre de cotes du cube : 12");
            printf("Circonference : %.2f",12 * a);
            printf("Aire : %.2f", 6 * pow (a,2) );
            printf("Volume : %.2f", pow(a,3) );
        break ;
        
        case 11 : // cylindre
        	printf("Saisissez la mesure du rayon du cylindre et sa hauteur :");
            scanf("%f %f", &a, &b);
            printf("Nom de la figure : Cylindre");
            printf("Nombre de cotes du cylindre : 0");
            printf("Circonference : %.2f", 4 * PI * a);
            printf("Aire : %.2f", 2 * PI * a * ( a + b) );
            printf("Volume : %.2f",PI * pow(a,2) * b);
        break ;
        
        case 12 : // sphere
        	printf("Saisissez la mesure du rayon de la sphere :");
            scanf("%f", &a);
            printf("Nom de la figure : Sphere");
            printf("Nombre de cotes de la sphere : 0");
            printf("Circonference : Indefinie");
            printf("Aire : %.2f", 4 * PI * pow(a,2) );
            printf("Volume : %.2f", ( 4 / 3 ) * PI * pow(a,2) );
        break ;
    }
}
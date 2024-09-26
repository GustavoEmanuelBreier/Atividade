#include <stdio.h>
#include <string.h>

int main() {
    
    //Entradas
    char primeiraPalavra[20], segundaPalavra[20], terceiraPalavra[20];
    char animal[20];
    
    //VERTEBRADOS
    char vet[11] = "vertebrado";
    
    char ave[4] = "ave";
    char mamifero[9] = "mamifero";
    
    char aguia[6] = "aguia";
    char pomba[6] = "pomba";
    
    char homem[6] = "homem";
    char vaca[5] = "vaca";
    
    //INVERTEBRADOS
    char invet[13] = "invertebrado";
    
    char inseto[7] = "inseto";
    char anelideo[9] = "anelideo";
    
    char pulga[6] = "pulga";
    char lagarta[8] = "lagarta";
    
    char sanguessuga[12] = "sanguessuga";
    char minhoca[8] = "minhoca";
    
    //tipos
    char carnivoro[10] = "carnivoro";
    char onivoro[8] = "onivoro"; 
    char herbivoro[10] = "herbivoro";
    char hematofago[11] = "hematofago";
    
    //leitura das entradas
    scanf("%s", primeiraPalavra);
    scanf("%s", segundaPalavra);
    scanf("%s", terceiraPalavra);
    
    //Compara a entrada com os valores
    if (strcmp(primeiraPalavra, vet) == 0)
    {
        if (strcmp(segundaPalavra, ave) == 0)
        {
            if (strcmp(terceiraPalavra, carnivoro) == 0)
            {
                strcpy(animal, "aguia");
                printf("%s\n", animal);
            }
            else if (strcmp(terceiraPalavra, onivoro) == 0)
            {
                strcpy(animal, "pomba");
                printf("%s\n", animal);
            }
        } 
        else if (strcmp(segundaPalavra, mamifero) == 0)
        {
            if (strcmp(terceiraPalavra, onivoro) == 0)
            {
                strcpy(animal, "homem");
                printf("%s\n", animal);
            } 
            else if (strcmp(terceiraPalavra, herbivoro) == 0)
            {
                strcpy(animal, "vaca");
                printf("%s\n", animal);
            }
        }
    } 
    else if (strcmp(primeiraPalavra, invet) == 0)
    {
       
        if (strcmp(segundaPalavra, inseto) == 0)
        {
            if (strcmp(terceiraPalavra, hematofago) == 0)
            {
                strcpy(animal, "pulga");
                printf("%s\n", animal);
            } 
            else if (strcmp(terceiraPalavra, herbivoro) == 0)
            {
                strcpy(animal, "lagarta");
                printf("%s\n", animal);
            }
        } 
        else if (strcmp(segundaPalavra, anelideo) == 0)
        {
            if (strcmp(terceiraPalavra, hematofago) == 0)
            {
                strcpy(animal, "sanguessuga");
                printf("%s\n", animal);
            } 
            else if (strcmp(terceiraPalavra, onivoro) == 0)
            {
                strcpy(animal, "minhoca");
                printf("%s\n", animal);
            }
        }    
    }
    
    return 0;
}
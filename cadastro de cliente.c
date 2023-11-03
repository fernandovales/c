#include <stdio.h>
#include<stdlib.h>
#include<time.h>

 struct infocliente{
        char nome[100];
        char email[100];
};
    
int main(){
    struct infocliente clientes[100];
    int opcao,numclientes= 0;
    
    do {
        printf("SELECIONE UMA OPÇÃO:\n");
        printf("1- Adcionar cliente\n");
        printf("2- Visualizar clientes\n");
        printf("3- Editar cliente\n");
        printf("4- Excluir cliente\n");
        printf("5- Sair\n");
        
        scanf("%d",&opcao);
        
        switch(opcao){
            
                
            
        
        } 
    }while(opcao!=5);
   
    
    return 0;
}
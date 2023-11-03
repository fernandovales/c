#include <stdio.h>
#include<stdlib.h>
#include <string.h>

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
            case 1:{
                printf("digite o nome do cliente: ");
                scanf("%s",clientes[numclientes].nome);
                printf("digite o email do cliente: ");
                scanf("%s",clientes[numclientes].email);
                numclientes++;
                
                printf("clientes cadastrados com sucesso!\n");
                printf("\n");
                break;
            }
            case 2:{
                printf("Clientes cadastrados:\n");
                for(int i=0;i<numclientes;i++){
                    printf("nome: %s\n",clientes[i].nome);
                    printf("email: %s\n",clientes[i].email);
                    printf("-------------------\n");
                }
                break;
            }
            case 3:
        
            
        
        } 
    }while(opcao!=5);
   
    
    return 0;
}
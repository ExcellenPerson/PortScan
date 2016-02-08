#include <stdio.h>
#include <netdb.h>

main(int argc, char *argv[]){
    int conecta;
    int msocket;
    char *endereco;
    endereco = argv[1];
    int port;
    
    struct sockaddr_in alvo;
    for(port=0;port<1000;port++){
        mscoket = socket(AF_INET, SOCK_STREAM);
        alvo.sin_family = AF_INET;
        alvo.sin_port = htons(port);
        alvo.sin_addr.s_addr = inet_addr(endereco);
        conecta = connect(msocket, (struct sockaddr *)&alvo, sizeof alvo);
        if(conecta < 0){
            printf("PORTA %i [FECHADA]\n", port);
            close(msocket);
            close(conecta);
        }else{
            printf("PORTA %i [ABERTA]\n", port);
            close(msocket);
            close(conecta);
        }
    
    
    }
    return 0;
}

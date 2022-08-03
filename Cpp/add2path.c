#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    const char *ccpp = "setx path \"\%PATH\%;c:\\Users\\Win10\\Documents\\Projects\\CPP\\ccpp\\\"";
    const char *vs = "setx path \"\%PATH\%;c:\\Users\\Win10\\Documents\\Projects\\CPP\\VS\\\"";
    const char *vicpp = "setx path \"\%PATH\%;c:\\Users\\Win10\\Documents\\Projects\\CPP\\ViCPP\\\"";
    const char *npp = "setx path \"\%PATH\%;c:\\Users\\Win10\\Documents\\Projects\\CPP\\nPP\\\"";
    system(ccpp);
    // system(vs);
    // system(vicpp);
    // system(npp);
    system("pause");
    return 0;
}
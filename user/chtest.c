//
// Created by os on 1/30/22.
//

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){
    //arg1 - sched , arg2 - coeff, arg3 - preemptive

    if (argc == 4){
        if (!strcmp(argv[1],"sjf")){
            if(atoi(argv[2]) <=100 && atoi(argv[2]) >= 0){
                if( atoi(argv[3]) == 1){
                    chschd(0,atoi(argv[2]));
                }
                else chschd(1,atoi(argv[2]));
            }
        }
        else if(!strcmp(argv[1],"cfs")){
            chschd(2,-1);
        }
    }
    else if (argc == 2 && !strcmp(argv[1],"cfs")){
        chschd(2,-1);
    }
    else printf("Pogresno unet format\n");
    exit(0);

}

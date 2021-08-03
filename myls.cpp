#include <dirent.h>
#include <iostream>


int main(int argc , char *argv[]){
    DIR *dir = nullptr;
    dir = opendir(argv[1]);

    if(dir == nullptr){
        std::cout << "open error" << std::endl;
        return -1;
    }

    std::cout << "open success" << std::endl;
    struct dirent *pDir = nullptr;
    while((pDir = readdir(dir))){
        std::cout << pDir->d_name << std::endl;
        
    }//end while
    
    closedir(dir);
    return 0;
}
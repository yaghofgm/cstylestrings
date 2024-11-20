#include <cstring>
#include <iostream>
void strprint(char* s){
    while(*s!=0){ //the sentinel \0 has value 0
        std::cout<<*s;
        s++;
    }
    std::cout<<std::endl;
}
int main(){
    char str1[6]="hello";
    char str2[6]="hello";
    char str3[6]="apple";
    char str4[6] = {'y','a','g','h','o','\0'};

    // str1 == str2; //false 
    strcmp(str1,str2) ==0; //YES

    // str1 = str3; //no
    strcpy(str1,str3); //YES

    strprint(str1);
    strprint(str4);
}
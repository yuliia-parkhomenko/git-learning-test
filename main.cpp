#include <iostream>

int func1() {
    return 0;
}

int funcFromBranch1() {
    return 123;
}

int funcFromYourBrother() {
    return 456;
}

int main(){
    std::cout<<"Hello,Git!"<<std::endl;
    std::cout<<"New line"<<std::endl;
    std::cout<<"You've added new file"<<std::endl;
    std::cout<<"my commit"<<std::endl;
    std::cout<<"Created new branch, current is branch1"<<std::endl;
    return 0;
}
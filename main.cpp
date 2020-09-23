#include "Node.cpp"
#include <iostream>
//#include "NodeList.cpp"


int main(){
    auto n1 = std::make_shared<Node>(1, true);
    auto n2 = std::make_shared<Node>(2,false);
    n1->addToList('a',n2);
    n2->addToList('b',n1);

    std::cout << "worked";



}



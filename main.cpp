#include "Node.cpp"
#include <iostream>
//#include "NodeList.cpp"


int main(){
    Node n1 = Node(1, true);
    Node n2 = Node(2,false);
    n1.addToList('a',n2);
    n2.addToList('b',n1);

    std::cout << "worked";



}



#include "Node.cpp"


int main(){
    
    auto n1 = std::make_shared<Node>(1, false);
    auto n2 = std::make_shared<Node>(2,false);
    auto n3 = std::make_shared<Node>(3,true);
    n1->addToList('a',n2);
    n2->addToList('b',n1);
    n1->addToList('c',n3);
    std::string seq = "abc";

    std::stack<int> nodeSeq = n1->traverse(seq);

    while(nodeSeq.size()){
        std::cout << nodeSeq.top();
        nodeSeq.pop();
    }



}



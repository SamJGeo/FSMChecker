#include "Node.hpp"


Node::Node(int _id, bool _terminator): id(_id), terminator(_terminator)
{
    std::unordered_map<char,std::shared_ptr<Node>> connections;
};

bool Node::isTerminatable()
{
    return(terminator);
};
        
void Node::addToList(char _label, std::shared_ptr<Node> n){
    connections.insert({_label,n});
};
        
void Node::traverse(std::string substr){
};
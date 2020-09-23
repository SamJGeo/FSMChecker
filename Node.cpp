#include "Node.hpp"


Node::Node(int _id, bool _terminator): id(_id), terminator(_terminator)
{
    std::unordered_map<char,std::shared_ptr<Node>> connections;
};

bool Node::isTerminatable()
{
    return(terminator);
};
        
void Node::addToList(char _label, Node n){
    connections.insert(std::make_pair<char,std::shared_ptr<Node>(_label,std::make_shared<Node>(n)));
};
        
void Node::traverse(std::string substr){
};
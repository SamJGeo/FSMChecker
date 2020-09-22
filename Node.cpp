#include "Node.hpp"


Node::Node(int _id, bool _terminator): id(_id), terminator(_terminator)
{
    std::unordered_map(char,std::vector<int>) connections;
};

Node::isTerminatable()
{
    return(terminator);
};
        
Node::addToList(char _label, Node n){
    connections.insert(std::make_pair<char,std::shared_ptr<node>(_label,std::make_shared<node>(n)));
};
        
Node::traverse(string substr){
    return ;
};
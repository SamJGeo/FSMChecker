#include "Node.hpp"


Node::Node(char _id, bool _terminator): id(_id), terminator(_terminator)
{
    std::unordered_map(char,std::vector<int>) connections;
};

Node::isTerminatable()
{
    return(terminator);
};
        
Node::addToList(char _label, int _id){
    connections.insert(std::make_pair<char,int>(_label,_id));
};
        
Node::traverse(string substr){
};
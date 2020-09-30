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
    std::vector<std::shared_ptr<Node>> nl;
    if (!this->connections.count(_label)){
        nl = {};
        nl.push_back(n);

    } else{
        nl = this->connections.find(_label)->second;
        nl.push_back(n);
        this->connections.erase(_label);
    }

    connections.insert({_label,nl});

        
};
        
std::stack<int> Node::traverse(std::string subString){
    if (subString.empty()){
        std::stack<int> nl;
        if (this->terminator){
            nl.push(this->id);
        }else{
            nl.push(-1);
        }
        return nl;
    }
    
    
    if (!this->connections.count(subString[0])){
        std::stack<int> nl;
        nl.push(-1);
        return nl;
    } else{
        std::vector<std::shared_ptr<Node>> connectedVia = this->connections.find(subString[0])->second;
        for (std::shared_ptr<Node> n: connectedVia){
            std::stack<int> traveled = n->traverse(subString.substr(1,subString.size()));

            if (traveled.top() != -1){
                traveled.push(this->id);
                return traveled;
            }
        }
        std::stack<int> nl;
        nl.push(-1);
        return nl;
        
    }

};
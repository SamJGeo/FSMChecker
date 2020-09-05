#pragma once
using label = char;
include "System.hpp"

class Node {
    public:
        Node(char _id, bool terminator);
        std::unordered_map(label,std::vector<std::shared_ptr<Node>>) connections;
        bool terminator;
        

}
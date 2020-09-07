#pragma once

#include "Node.hpp"

class NodeList{

    public:
        NodeList();

    private:
        std::unordered_map<int,std::unique_ptr<Node>>;
}
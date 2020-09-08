#pragma once

#include "Node.hpp"

class NodeList{

    public:
        NodeList();
        std::shared_ptr<std::unique_ptr<Node>> getNodePtr(int _id);

    private:
        std::unordered_map<int,std::unique_ptr<Node>> nodes;
}
#pragma once
#include "Node.hpp"

class System{

    public:
        System();
        bool traverse(std::string sequence);
        


    private:
        Node start_node;
        Node terminate_node;

}
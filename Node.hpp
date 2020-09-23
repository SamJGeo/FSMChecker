#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <memory>


class Node{

    public:
        Node(int _id, bool _terminator);
        bool isTerminatable();
        void addToList(char _label, std::shared_ptr<Node> n);
        void traverse(std::string substr);
        

    private:
        std::unordered_map<char,std::shared_ptr<Node>> connections;
        bool terminator;
        int id;

};
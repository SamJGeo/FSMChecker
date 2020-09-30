#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <memory>
#include <stack>
#include <iostream>


class Node{

    public:
        Node(int _id, bool _terminator);
        bool isTerminatable();
        void addToList(char _label, std::shared_ptr<Node> n);
        std::stack<int> traverse(std::string subString);
        

    private:
        std::unordered_map<char,std::vector<std::shared_ptr<Node>>> connections;
        bool terminator;
        int id;

};
#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <shared_ptr>


class Node{

    public:
        Node(int _id, bool _terminator);
        bool isTerminatable();
        void addToList(char _label, int _id);
        void traverse(std::string substr);
        

    private:
        std::unordered_map(char,std::vector<int>) connections;
        bool terminator;

}
#pragma once


class Node{

    public:
        Node(char _id, bool terminator);
        bool isTerminatable();
        addToList(char _label, int _id);
        

    private:
        std::unordered_map(label,std::vector<id>) connections;
        bool terminator;

}
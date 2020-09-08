#include "NodeList.hpp"
NodeList::NodeList(){
    /**
    Loop through a files contents and build node objects from this.
    **/
    std::unordered_map<int,std::unique_ptr<Node>> nodes;
};

NodeList::getNodePtr(int _id)
{
    return std::make_shared(nodes[_id]);
};

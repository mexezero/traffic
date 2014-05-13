
#ifndef _NODE_H
#define _NODE_H

#include <map>
#include <memory>
#include <string>

namespace traffic
{
    class Node
    {
        public:
        // Default Constructor
        Node();
        
        // Add new node to the map of neighbors
        // Returns status as bool
        bool AddNeighbor(std::shared_ptr<Node> node, double distance);
        
        // Get the distance from a node
        // Returns distance as a double, or -1 if not a neighbor
        double GetDistanceFrom(std::shared_ptr<Node> node);
        
        private:
        // Name of the node
        std::string name;
        
        // Neighboring node name and distance
        std::map<std::shared_ptr<Node>, double> neighbors;
        
    };
}

#endif
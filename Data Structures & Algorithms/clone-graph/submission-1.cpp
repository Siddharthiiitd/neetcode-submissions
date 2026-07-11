/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return nullptr;
        unordered_map<Node*,Node*> map;
        queue<Node*> Q;
        Q.push(node);
        map[node]= new Node(node->val);
        
        while(!Q.empty()){
            auto curr = Q.front();
            Q.pop();
            for(Node* neighbour : curr->neighbors){
                if(!map.count(neighbour)){
                    map[neighbour] = new Node(neighbour->val);
                    Q.push(neighbour);
                }
                map[curr]->neighbors.push_back(map[neighbour]);
            }
        }
        return map[node];
    }
};

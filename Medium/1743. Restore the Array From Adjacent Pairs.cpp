class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        //use hash map to record adjacentPairs (key: node, value: key's adjacent node)
        unordered_map<int, vector<int>> adjacentNode;
        for (auto node : adjacentPairs) {
            adjacentNode[node[0]].push_back(node[1]);
            adjacentNode[node[1]].push_back(node[0]);
        }

        //find edge point (head or tail)
        vector<int> resArray;
        for (auto adjNode : adjacentNode) {
            if (adjNode.second.size() == 1) {
                resArray.push_back(adjNode.first);
                resArray.push_back(adjNode.second[0]);
                break;
            }
        }

        //restore the array
        int previous = resArray[0];
        int current = resArray[1];
        while (true) {
            if (adjacentNode[current].size() == 1) break;
            else if(adjacentNode[current][0] != previous) {
                int nextNode = adjacentNode[current][0];
                resArray.push_back(nextNode);
                previous = current;
                current = nextNode;
            }
            else {
                int nextNode = adjacentNode[current][1];
                resArray.push_back(nextNode);
                previous = current;
                current = nextNode;
            }
        }

        return resArray;

    }
};

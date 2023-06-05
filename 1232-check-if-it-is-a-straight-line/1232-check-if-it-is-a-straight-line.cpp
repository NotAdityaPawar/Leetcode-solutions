class Solution {
public:
    int diffy(vector<int> &a, vector<int>&b){
        return a[1] - b[1];
    }
    
    int diffx(vector<int> &a, vector<int>&b){
        return a[0] - b[0];
    }
    
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size()==2) return true;
        
        int deltax = diffx(coordinates[1],coordinates[0]);
        int deltay = diffy(coordinates[1],coordinates[0]);
        for (int i =2;i<coordinates.size();i++){
            if (deltay*diffx(coordinates[i], coordinates[0]) != deltax*diffy(coordinates[i], coordinates[0])){
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> s;
        
        
        int x = 0;
        int y = 0;
        s.insert({x,y});
        for (auto c: path){
            switch(c){
                case 'N': y++;break;
                case 'S': y--;break;
                case 'E': x++;break;
                case 'W': x--;break;
            }
            
            if (s.find({x,y})!=s.end()){
                return true;
            }
            else{
                s.insert({x,y});
            }
        }
        
        return false;
    }
};
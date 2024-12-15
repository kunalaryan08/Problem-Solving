#include<bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
};

int main(){
    int N;
    cin>>N;
    vector<Point> vertices(N);
    int min_x=INT32_MAX, max_x=INT32_MIN, min_y=INT32_MAX, max_y=INT32_MIN;
    for(int i=0;i<N;i++){
        cin>>vertices[i].x>>vertices[i].y;
        min_x = min(min_x, vertices[i].x);
        max_x = max(max_x, vertices[i].x);
        min_y = min(min_y, vertices[i].y);
        max_y = max(max_y, vertices[i].y);
    }
    int M;
    cin>>M;
    auto point_in_polygon = [&](double px, double py) -> bool{
        bool inside=false;
        for(int i=0;i<N;i++){
            int j=(i+1)%N;
            double xi=vertices[i].x, yi=vertices[i].y;
            double xj=vertices[j].x, yj=vertices[j].y;
            if(((yi > py) != (yj > py))){
                double intersect = (xj - xi) * (py - yi) / (double)(yj - yi) + xi;
                if(px < intersect)
                    inside = !inside;
            }
        }
        return inside;
    };
    vector<pair<int,int>> cells;
    for(int x=min_x; x<max_x; x++){
        for(int y=min_y; y<max_y; y++){
            double cx = x + 0.5, cy = y + 0.5;
            if(point_in_polygon(cx, cy))
                cells.emplace_back(x, y);
        }
    }
    if(cells.empty()){
        cout<<0;
        return 0;
    }
    int C = cells.size();
    map<pair<int,int>, int> cell_id;
    for(int i=0;i<C;i++) cell_id[cells[i]]=i;
    vector<bitset<100>> blocks;
    for(int bx = min_x - M +1; bx <= max_x; bx++){
        for(int by = min_y - M +1; by <= max_y; by++){
            bitset<100> b;
            bool valid=false;
            for(int dx=0; dx<M; dx++) {
                for(int dy=0; dy<M; dy++) {
                    int x = bx + dx, y = by + dy;
                    auto it = cell_id.find({x, y});
                    if(it != cell_id.end()){
                        b.set(it->second);
                        valid=true;
                    }
                }
            }
            if(valid) blocks.push_back(b);
        }
    }
    int min_presses = C;
    function<void(bitset<100>, int)> backtrack = [&](bitset<100> covered, int count)-> void{
        if(count >= min_presses) return;
        if((covered.count()) == C){
            min_presses = count;
            return;
        }
        int first = -1;
        for(int i=0;i<C;i++) if(!covered[i]){
            first = i;
            break;
        }
        if(first == -1) return;
        for(auto &b: blocks){
            if(b[first]){
                bitset<100> new_covered = covered | b;
                backtrack(new_covered, count+1);
            }
        }
    };
    backtrack(bitset<100>(), 0);
    cout<<min_presses;
}

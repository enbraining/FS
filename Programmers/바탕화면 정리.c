#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int min_x = 100, min_y = 100, max_x = -1, max_y = -1;
    
    for(int i = 0; i < wallpaper.size(); i++){
        for(int j = 0; j < wallpaper.at(0).size(); j++){
            if(wallpaper.at(i)[j] == '#'){
                if(i < min_x) min_x = i;
                if(j < min_y) min_y = j;
                if(i > max_x) max_x = i;
                if(j > max_y) max_y = j;
            }
        }
    }
    
    return { min_x, min_y, max_x + 1, max_y + 1 };
}

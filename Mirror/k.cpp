    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int a, p, v, t=1, x, lp;
        bool z=true;
        vector<pair<int, int>> trem, din;
        vector<pair<int,int>>::iterator it;
        
        cin >> a;

        while(a--){
            cin >> p >> v;
            trem.push_back(make_pair(p, v));
        }

        while(!trem.empty()){
            for (it = trem.begin(); it != trem.end(); ++it){
                if (z){
                    din.push_back(make_pair((it->first + it->second * t), t));
                    lp = (it->first + it->second * t);
                    it = trem.erase(it);
                    it--;
                    z = false;
                } else {
                    if(lp != (it->first + it->second * t)) {
                        din.push_back(make_pair((it->first + it->second * t), t));
                        lp = (it->first + it->second * t);
                    }
                    it = trem.erase(it);
                    it--;
                }
                t++;
            }
        }

        cout << din.size() << endl;

        for (it = din.begin(); it != din.end(); ++it){
            cout << it-> first << " " << it->second << endl;
        }

        return 0;
    }
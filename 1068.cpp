    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        string sentence;
        int par;

        while(cin >> sentence){
            par = 0;

            for(int i=0; i<sentence.size(); i++){
                if(sentence[i] == '(') par++;
                else if (sentence[i] == ')' && par < 1) {par--;break;}
                else if (sentence[i] == ')') par--;
            }
            if(par == 0){
                cout << "correct" << endl;
            } else {
                cout << "incorrect" << endl;
            }
        }

        return 0;
    }
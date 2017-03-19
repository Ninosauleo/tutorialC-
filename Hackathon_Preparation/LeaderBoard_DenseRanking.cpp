#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> scores(n);
    for(int scores_i = 0;scores_i < n;scores_i++){
        cin >> scores[scores_i];
        // cout << "Scores is: " << endl;
        // cout << scores[scores_i] << endl;
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0;alice_i < m;alice_i++){
        cin >> alice[alice_i];
        // cout << "Alice is: " << endl;
        // cout << alice[alice_i] << endl;
    }

    // your code goes here
    int aliceRanking;
    int tableRanking;
    for(int alice_i = 0;alice_i < m;alice_i++){

        for(int scores_i = 0, tableRanking = 1;scores_i < n;scores_i++){
            /*
         cout << "Table ranking" << endl;
         cout << tableRanking << endl;
         cout << "Score index" << endl;
         cout << scores_i << endl;

         cout << "Alice index" << endl;
         cout << alice_i << endl;

         cout << "Loop Alice is: " << endl;
         cout << alice[alice_i] << endl;

         cout << "Loop Score is: " << endl;
         cout << scores[scores_i] << endl;
         */

            // cout << endl<< endl;

            if(scores[scores_i] <= alice[alice_i]){
                /*
               cout << "This score: " << scores[scores_i] << " with index: " << scores_i;
               cout << " is less than alice " << alice[alice_i] << " with index: " << alice_i << endl;
               cout << "The ranking of the score is: " << tableRanking << endl;
               */
                aliceRanking = tableRanking;
                //cout << "Alice ranking is " << aliceRanking << endl;
                cout << aliceRanking << endl;
                //cout << endl << endl << endl;
                break; //so we don't care about the other part of the loop.
            }

            /*
            * Keep track of table ranking
            */
            if(scores[scores_i] == scores[scores_i + 1]){
                tableRanking = tableRanking;
            } else {
                tableRanking = tableRanking + 1;
                aliceRanking = tableRanking;
                //cout << "Alice ranking is " << aliceRanking << endl;
                if(scores_i == n-1){
                    cout << aliceRanking << endl;
                }
            }



        }

    }

    return 0;
}


/* Alternative Version

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    int n;
    cin>>n;
    int score;
    set<int> s;

    //complexity O (N*log(n))
    for(int i=0;i<n;++i){
        cin>>score;
        s.insert(score);
    }

    set<int>::iterator it = s.begin();
    int rank = s.size()+1;
    int m;
    cin>>m;
    while(m--){
        cin>>score;
        while(*it<=score && it!=s.end()){
            ++it;--rank;
        }
        cout<<rank<<endl;
    }
    return 0;
}


 */

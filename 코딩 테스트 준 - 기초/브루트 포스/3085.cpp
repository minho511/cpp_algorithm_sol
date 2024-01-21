#include<bits/stdc++.h>
using namespace std;

int ChangeAndCount(vector<vector<char> > Map, int X1, int Y1, int X2, int Y2){
    int res = 0;
    int N = Map.size();
    int cnt, ccnt;
    char Temp;
    int Rchar;
    int Cchar;
    int RMax = 0;
    int CMax = 0;
    Temp = Map.at(X1).at(Y1);
    Map[X1][Y1] = Map.at(X2).at(Y2);
    Map[X2][Y2] = Temp;

    for(int i = 0; i<N; i++){
        cnt = 1;
        ccnt = 1;
        Rchar = Map.at(i).at(0);
        for(int j = 1; j<N; j++){
            if(Rchar == Map.at(i).at(j)) cnt++;
            else{
                Rchar = Map.at(i).at(j);
                cnt = 1;
            }
            
            RMax = max(RMax, cnt);
        }    
        RMax = max(RMax, cnt);

        Cchar = Map.at(0).at(i);
        for(int j = 1; j<N; j++){
            if(Cchar == Map.at(j).at(i)) ccnt++;
            else{
                Cchar = Map.at(j).at(i);
                ccnt = 1;
            }
            CMax = max(CMax, ccnt);
        }    
        CMax = max(CMax, ccnt);
        
    }
    
    Temp = Map.at(X1).at(Y1);
    Map[X1][Y1] = Map.at(X2).at(Y2);
    Map[X2][Y2] = Temp;
    return max(CMax, RMax);
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int answer = 0;
    int res_temp;
    int N;
    string Inp;
    vector < vector<char> > candy;
    vector<char> temp;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> Inp;
        for(int j = 0; j<N; j++){
            temp.push_back(Inp.at(j));
        }
        candy.push_back(temp);
        temp.erase(temp.begin(), temp.end());
    }
   
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(j<N-1){
                if(candy[i][j] != candy[i][j+1]){
                    res_temp = ChangeAndCount(candy, i, j, i, j+1);
                    answer = max(answer, res_temp);
                    
                }
            }
            if(i<N-1){
                if(candy[i][j] != candy[i+1][j]){
                    res_temp = ChangeAndCount(candy, i, j, i+1, j);
                    answer = max(answer, res_temp);
                }
            }

        }
    }
    
    cout << answer << '\n';
}
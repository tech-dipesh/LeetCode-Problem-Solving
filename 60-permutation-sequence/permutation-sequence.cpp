class Solution {
public:
    string getPermutation(int n, int k) {
    vector<int>vt;
    int factorial=1;
    for(int i=1;i<n;i++){
        factorial*=i;
        vt.push_back(i);
    }
    // Last element
    vt.push_back(n);
    // k-=1;
    k--;
    string final="";
    // string s="";
    while(true){
        int startPosition=k/factorial;
        final+=to_string(vt[startPosition]);
        vt.erase(vt.begin()+k/factorial);
        if(vt.empty()){
            break;
        }
        k%=factorial;
        factorial/=vt.size();
    }
    return final;
    }
};
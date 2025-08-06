class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& v) {

        for(int i=0 ;i<9 ; i++){ // rows
            unordered_map<char,int>freq1;
            for(int j=0 ; j<9 ; j++){
                if(v[i][j] != '.'){
                    freq1[v[i][j]]++;
                    if(freq1[v[i][j]]>1)return false;
                }
            }
        }
         for(int i=0 ;i<9 ; i++){ // coloumns
            unordered_map<char,int>freq2;
            for(int j=0 ; j<9 ; j++){
                if(v[j][i] != '.'){
                    freq2[v[j][i]]++;
                    if(freq2[v[j][i]]>1)return false;
                }
            }
        }
         for (int box = 0; box < 9; box++) { // 3*3
                 unordered_map<char,int>freq3;
            int startRow = (box / 3) * 3;
            int startCol = (box % 3) * 3;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    char c = v[startRow + i][startCol + j];
                    if (c != '.') {
                        freq3[c]++;
                        if (freq3[c] > 1) return false;
                    }
                }
            }
        }
         
       return true;
    }
};
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        vector<string> result;
        
        string TopRow = "qwertyuiop";
        string MiddleRow = "asdfghjkl";
        string BottomRow = "zxcvbnm";
        
        string SearchRow;
            
        for(int i = 0; i < words.size(); i++)
        {
            
            if(TopRow.find(tolower(words[i][0])) <= 10)
                SearchRow = TopRow;
            
            else if(MiddleRow.find(tolower(words[i][0])) <= 10)
                SearchRow = MiddleRow;
            
            else
                SearchRow = BottomRow;
            
            bool signal = false;
            
            for(int j = 1; j < words[i].length(); j++)
            {
                if(SearchRow.find(tolower(words[i][j])) > 11)
                {
                    cout<<words[i][j];
                    signal = true;
                    break;
                }  
            }
            
            if(signal == false)
            {
                result.push_back(words[i]);
            }
                    
        }
           
        return result;
        
    }
};
class Solution{
    public:
    
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        
      set<int>s;
      vector<int>ans(n,0); 
      for(int i=n-1;i>=0;i--)
      {
          if(s.size()==0)
          {
              ans[i]=-1;
              //s.insert(arr[i]);
          }
           if(s.size()>0)
          {
              auto it = s.upper_bound(arr[i]);
              if(it!=s.end())
              {
                  ans[i]=*it;
              }
              else
                ans[i]=-1;
          }
          
          s.insert(arr[i]);
      }
      return ans;
    }
};

/*
     visit the channel for c++ video explanation of above code 
     https://youtu.be/wUJ81Rujpt8
*/

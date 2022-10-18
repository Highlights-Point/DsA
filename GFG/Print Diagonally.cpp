class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		
		vector<int>ans;
		
	    // uppar half
	    for(int i=0;i<N;i++)
	    {
	        int row=0,col=i;
	        while(col>=0)
	        {
	            ans.push_back(A[row][col]);
	            row++;
	            col--;
	        }
	    }
	    
	    // lower half
	    for(int i=1;i<N;i++)
	    {
	        int row=i,col=N-1;
	        while(row<N)
	        {
	            ans.push_back(A[row][col]);
	            row++;
	            col--;
	        }
	    }
	    
	    return ans;
	}

};

/*
    if you have doubt visit , refer the  video https://youtu.be/7OZAKipo8sM
*/

class Solution
{
public:

    void flood(vector<vector<int>> &image,vector<vector<int>>& vis,int i, int j,int oldc,int color)
    {
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j] != oldc || vis[i][j] == 1)
            return;
        
        if(image[i][j] == oldc)
        {
            image[i][j] = color;
            vis[i][j] = 1;
        }
        
        flood(image,vis,i+1,j,oldc,color);
        flood(image,vis,i-1,j,oldc,color);
        flood(image,vis,i,j+1,oldc,color);
        flood(image,vis,i,j-1,oldc,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        int oldc = image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        flood(image,vis,sr,sc,oldc,color);

        return image;
    }
};
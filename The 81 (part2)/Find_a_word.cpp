#include<iostream>
#include<vector>

using namespace std;


bool adjacentSearch(vector<vector<char>>& board, const string& word, int i, int j, int index)
{
  if(index == word.size()) return true;

  if(i < 0 || j < 0 || i > board.size()-1 || j > board[0].size()-1)
  {
      //boundry condition
      return false;
  }

  if(board[i][j] != word[index])
  {
      return false; // do not match
  }

  // match! change the content, to avoid duplicated search
  board[i][j] = '*';

  bool searchFurther =  adjacentSearch(board, word, i+1, j, index+1) || // up
                        adjacentSearch(board, word, i-1, j, index+1) || // down
                        adjacentSearch(board, word, i, j-1, index+1) || // left
                        adjacentSearch(board, word, i, j+1, index+1);   // right
       board[i][j] = word[index]; // modify it back!
       return searchFurther;
}


bool exist(vector<vector<char>>& board, string word)
{

  //Iterate through all the elements as starting character
  for(int i = 0; i < board.size(); ++i)
  {
    for(int j = 0; j < board[0].size(); ++j)
    {
      if(adjacentSearch(board, word, i, j, 0))
        return true;
    }
  }
  return false;

}

int main()
{
    int n,m;
    cin>>n>>m;
  vector<vector<char> > input={{'A','W','E','.','Q','X'},
{'L','L','L','.','E','O'},
{'I','Z','Z','W','L','L'}
  };


    //string word = "ABA";
    string word = "ALLIZZWELL";

if(exist (input, word))
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;



return 0;
}

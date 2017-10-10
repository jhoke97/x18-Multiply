#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector < vector <int> > table;
  table.resize(13);
    for(int i = 0; i < table.size(); i ++)
     {
      for(int j = 0; j < table.size(); j++)
      {
        table[i].resize(13);
      }
     }
   for(int i = 0; i < table.size(); i++)
     for(int j = 0; j < table[i].size(); j++)
     {
       if(i == 0 && j == 0)
       {
        table[i][j] = 0;  
       }else if( i == 0 )
       {
        table[i][j] = j;
       }else{
        table[i][j] = i * j; 
       }

     }
   for(int i = 0; i < table.size(); i++)
   {
      cout << endl;
      for(int j = 0; j < table[i].size(); j++)
      {
        cout << table[i][j] << " | ";
      }
    }
   return 0;
}

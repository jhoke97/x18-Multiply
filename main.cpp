#include <iostream>
#include <vector>
using namespace std;
const int TABLE_SIZE = 12;
int main()
{
  vector <vector <int> > table; 
  for(int i = 0; i < table.size(); i++)
  {
   table.resize(13); 
   for(int j = 0; j < table[i].size(); j++)
    {
     table[i].resize(13); 
    } 
  } 
  for(int i = 0; i <table.size();i++)
  {
    for(int j = 0; j<table[i].size(); j++)
    {
      table[i][j] = 0;
    /*  if(i ==0 && j ==0){
       table[0][0] = i;
      }else if(i == 0)
      {
        table[i][j] = j;
      }else
      {
       table[i][j] = i*j;    
      }*/    
    }
  }
  for(int i = 0; i < table.size(); i++)
   {
    for(int j = 0; j < table[i].size(); i++)
    {
      cout << table[i][j];
    }
  cout << endl; 
  }
return 0;
}

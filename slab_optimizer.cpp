#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

void input(int &slabWidth, int &slabHeight, int &num, vector<vector<int>> &matrix) {
  int width, height, price;

  if(scanf("%d", &num) < 1 ){} // number of pieces to recieve
  for (int i = 0; i < num; i++){ // write each piece
    if(scanf("%d %d %d", &width, &height, &price) < 3){}   //if it's possible to put the piece in the right form in the matrix
    if (slabWidth >= width && slabHeight >= height)        
      matrix[width][height] = price;
    if (slabWidth >= height && slabHeight >= width) //if it's possible to put the piece in inverted form in the matrix
      matrix[height][width] = price;
  }
}

int maximizeValue(int width, int height, vector<vector<int>> &matrix){
  for (int w = 1; w <= width; w++) {      //creating slabs of different dimensions
    for (int h = 1; h <= height; h++){
      for (int k = 0; k <=  h; k++){      //making horizontal cuts, see which is the value to store
          matrix[w][h] = max(matrix[w][h], matrix[w][h - k] + matrix[w][k]);
        }
      for (int k = 0; k <= w; k++){       //same for the vertical cuts, but doing max with what we got from 
          matrix[w][h] = max(matrix[w][h], matrix[w - k][h] + matrix[k][h]); 
        }
    }
  }
  return matrix[width][height];
}

int main() {
  int width, height, num; 
  if(scanf("%d %d", &width, &height) < 2){}  // size of slab
  vector<vector<int>> matrix(width + 1, vector<int>(height + 1, 0));   //create a 2D vector to store the prices of pieces

  input(width, height, num, matrix);  //get the input from using a function
  
  printf("%d\n", maximizeValue(width, height, matrix)); 
  return 0;
}

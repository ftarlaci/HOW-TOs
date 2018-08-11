/* This file contains little "how-to" code snippets that can be 
 * reused in various programs. Partly for self-note/future reuse
 * and partly to give some ideas to beginner programmers. 
 * Enjoy!
*/


// #HOW-TO print a vector of vectors.
for(int i = 0; i < vec.size(); i++){
	//prints each vector on a new line
    for (int j = 0; j < vec[i].size(); j++){
        cout << "[" << vec[i][j] << "," << "]" << endl;
    }
}



// HOW-TO find the difference between two numbers 
// method 1. 
int diff = x > y ? x - y : y - x;

// method 2. 
int diff = std::abs(x - y);
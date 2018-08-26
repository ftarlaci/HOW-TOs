/* This file contains little "how-to" code snippets that can be 
 * reused in various programs. Partly for self-note/future reuse
 * and partly to give some ideas to beginner programmers. 
 * Enjoy!
*/


/* -------------------------------------------------------------------------------------*/
/* 1. HOWTO print a vector of vectors.*/
for(int i = 0; i < vec.size(); i++){
	//prints each vector on a new line
    for (int j = 0; j < vec[i].size(); j++){
        cout << "[" << vec[i][j] << "," << "]" << endl;
    }
}


/* -------------------------------------------------------------------------------------*/
/* 2. HOWTO find the difference between two numbers */
// method 1. 
int diff = x > y ? x - y : y - x;
// method 2. 
int diff = std::abs(x - y);


/* -------------------------------------------------------------------------------------*/
/* 3. HOWTO divide a vector into two in the middle. */
vector<int> nums;
vector<int> leftVec(nums.begin(), nums.begin() + nums.size() / 2 + 1);
vector<int> rightVec(nums.begin() + nums.size() / 2 + 1, nums.end());


/* -------------------------------------------------------------------------------------*/
/* 4. how to  create a list of random numbers, sort it, and print it to the console */
vector<int> myVector(NUM_INTS);
generate(myVector.begin(), myVector.end(), rand);
sort(myVector.begin(), myVector.end());
copy(myVector.begin(), myVector.end(), ostream_iterator<int>(cout, "\n"));


/* -------------------------------------------------------------------------------------*/
/* 5. How to open a file and print its contents.*/
ifstream input("my-file.txt");
copy(istreambuf_iterator<char>(input), istreambuf_iterator<char>(),
ostreambuf_iterator<char>(cout));


/* -------------------------------------------------------------------------------------*/
/* 6. how to convert a string to upper case.*/
transform(s.begin(), s.end(), s.begin(), ::toupper);


/* -------------------------------------------------------------------------------------*/
/* Insert element into sorted order. The main idea is: in order for a list to be in sorted
	order, every element has to be smaller than the element that comes one position after it.
	Therefore, we find the first element in the vector that is bigger than the element we 
	want to insert, we then know that the element we are trying to insert must come directly
	before that element.  
*/
	size_t insertAt(vector<int>& vec, int toInsert){
		for(size_t i = 0; i < vec.size(); ++i){
			if(toInsert < vec[i]){
				return i;
			}
		}
		return vec.size();
	}

	// given a vector v and an element e, to insert e into v at position n, use:
	v.insert(v.begin() + n, e);

	// eg: insert element 10 at position 5:
	v.insert(v.begin() + 5, 10) // this will insert element 10 at position 6 (vectors are 0 indexed)
	// When an element is inserted at a position, all of the elements after it are
	// shuffled down one spot to make room, so calling insert will never overwrite a value.

	// finally: 
	int main() {
		vector<int> vals;
		/* Read the values. */
		for (int i = 0; i < kNumValues; ++i) {
			cout << "Enter an integer: ";
			int val = getInteger(); // utility function that we wrote separately
		/* Insert the element at the correct position. This line is the crux of the algorithm. */
			vals.insert(vals.begin() + insertAt(vals, val), val);
		}
		/* Print out the sorted list. */
		for (size_t i = 0; i < vals.size(); ++i)
			cout << vals[i] << endl;
	}

	/* More on vector initialization: 
		"In some cases, you may want to initialize the vector to a certain size where each element
		holds a value other than zero. You may wish, for example, to construct a vector<string> holding
		five copies of the string “(none),” or a vector<double> holding twenty copies of the value 137. 
		In these cases, C++ lets you specify both the number and default value for the elements in the vector
		using the following syntax: vector<double> myReals(20, 137.0); vector<string> myStrings(5, "(none)");
		Notice that we've enclosed in parentheses both the number of starting elements in the vector and the
		value of these starting elements. An important detail is that this syntax is only legal when initially
		creating a vector. If you have an existing vector and try to use this syntax, you will get a compile-time
		error." From CS106L Reader
		*/
/* -------------------------------------------------------------------------------------*/
/* If you need to make big changes to a vector's size (adding, deleting), "resize" is a better
	option than 'oush_back or 'insert'. Resize works by adding or removing elements from the end
	of the vector until the desired size is reached. 

	This function takes in a vector<int>, then prints out the elements in the vector one at a time, followed
	by a newline. Given this function, consider the following code snippet:
	
	vector<int> myVector; // Defaults to empty vector
	PrintVector(myVector); // Output: [nothing]
	
	myVector.resize(10); // Grow the vector, setting new elements to 0
	PrintVector(myVector); // Output: 0 0 0 0 0 0 0 0 0 0
	
	myVector.resize(5); // Shrink the vector
	PrintVector(myVector); // Output: 0 0 0 0 0
	
	myVector.resize(7, 1); // Grow the vector, setting new elements to 1
	PrintVector(myVector); // Output: 0 0 0 0 0 1 1
	
	myVector.resize(1, 7); // The second parameter is effectively ignored.
	PrintVector(myVector); // Output: 0
	
	In the first line, we construct a new vector, which is by default empty. Consequently, the call to
	PrintVector will produce no output. We then invoke resize to add ten elements to the vector. These
	elements are added to the end of the vector, and because we did not specify a default value are all
	initialized to zero. On our next call to resize, we shrink the vector down to five elements. Next, we use
	resize to expand the vector to hold seven elements. Because we specified a default value, the newlycreated
	elements default to 1, and so the sequence is now 0, 0, 0, 0, 0, 1, 1. Finally, we use resize to trim
	the sequence. Because the second argument to resize is only considered if new elements are added, it is
	effectively ignored. From CS106L Reader
*/
/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/


/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------------------*/






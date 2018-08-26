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
			int val = GetInteger();
		/* Insert the element at the correct position. */
			vals.insert(vals.begin() + insertAt(vals, val), val);
		}
		/* Print out the sorted list. */
		for (size_t i = 0; i < vals.size(); ++i)
			cout << vals[i] << endl;
	}
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

/* -------------------------------------------------------------------------------------*/






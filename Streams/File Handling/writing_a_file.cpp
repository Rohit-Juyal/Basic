#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("My.txt");

    // ios::app (short for append) means that instead of overwriting the file from the beginning, all output operations are done at the end of the file. This is only meaningful if the file is also open for output.
    // ofstream outfile("My.txt", ios::app);

    // ios::trunc (short for truncate) means that when the file is opened, the old contents are immediately removed. Again, this is only meaningful if the file is also open for output.    
    // ofstream outfile("My.txt", ios::trunc);    

    
    outfile  << "Hello" << endl;
    outfile << 225 << endl;

    outfile.close();
}
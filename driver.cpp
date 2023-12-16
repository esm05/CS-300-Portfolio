//============================================================================
// Name        : Project 2
// Author      : Evan Malia
// Version     : 1.0
// Description: Culmination of material learned during CS 300. Using a ADT of my choosing and applying to the ABCU requirements
//============================================================================


#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <time.h>

#include "BSTProject.hpp";

using namespace std;


int main(int argc, char* argv) {
	BinarySearchTree *bst;
	bst = new BinarySearchTree();
	Course course;
    
    // process command line arguments
    displayMenu(argc, argv, bst, course);
    return 0;
}
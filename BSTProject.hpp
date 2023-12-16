#ifndef _BSTProject_HPP_
#define _BSTProject_HPP_

#include <vector>
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;
struct Course {
    string courseId;
    string title;
    vector <string> prereq;

    Course() {
        this->courseId = "";
        this->title = "";
        this->prereq = {};
    }
};
struct Node {
    Course course;
    Node* left;
    Node* right;

    // default constructor
    Node() {
        left = nullptr;
        right = nullptr;
    }

    // initialize with a bid
    Node(Course aCourse) :
        Node() {
        course = aCourse;
    }
};



class BinarySearchTree {
private:
    Node* root;

    void addNode(Node* node, Course course);
    void inOrder(Node* node);


public:
    BinarySearchTree();
    virtual ~BinarySearchTree();
    void InOrder();
    void Insert(Course course);
    Course Search(string courseId);

    void DestroyBST(Node* node);
    int size;
};

void parseFile(string fileName, BinarySearchTree* bst);
void displayCourse(Course course);
void displayMenu(int argc, char* argv, BinarySearchTree* bst, Course course);
#endif // !_BSTProject_hpp_


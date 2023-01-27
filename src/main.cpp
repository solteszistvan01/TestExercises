//
// Created by solteszistvan on 2023.01.20..
//
#include <gtest/gtest.h>
#include <unordered_set>
#include <algorithm>

using namespace std;

//Create a function to check whether two unordered sets of integers are disjunct or not
//Are there any sets whose intersection with another set in the data structure is nonempty?
bool nonemptyIntersection(unordered_set<int> A, unordered_set<int> B);
//Unary predicate to check whether a set of sets of integers is pairwise disjunct.
bool pairwiseDisjunctSets(unordered_set<int>* Sets);

bool divisibleBy2(int n);

bool congruentTo76(int n);

bool is0(int n);

TEST(NMSO, predicateCheck){
//Check whether a set containing sets of natural numbers satisfies certain predicates
    unordered_set<int>* data;
    data = new unordered_set<int>[5];
    for (int i = 0; i < 100; i++){
        data[i%5].insert((i*2 + i));
    }
    unordered_set<int>::iterator begin;
    unordered_set<int>::iterator end;
    //print
    for (int i  =0; i < 5 ; i++){
        unordered_set<int>::iterator begin = data[i].begin();
        unordered_set<int>::iterator end = data[i].end();
        std::cout << "{";
        while(begin != end){
            std::cout << *begin << ", ";
            begin++;
        }
        std::cout <<"}" << "\n";
    }
    //TODO: Convert code to tests
    //TODO: Check whether the elements of data are pairwise disjunct using a single predicate
    EXPECT_EQ(pairwiseDisjunctSets(data), true);
    EXPECT_EQ(any_of(data->begin(), data->end(), divisibleBy2), true); //Tests whether any set in the data satisfies the predicate "divisibleBy2"
    EXPECT_EQ(all_of(data->begin(), data->end(), congruentTo76), false);
    EXPECT_EQ(none_of(data->begin(), data->end(), is0), false);
    EXPECT_EQ(5,5);
    EXPECT_EQ(7,1);
}

TEST(NMSO, search){
    int** data;
    data = new int*[5];
//declarations
    for (int j = 0; j < 5; j++){
        data[j] = new int[256];
    }


}
//TODO: Modify hash and see the print results in the declaration of data
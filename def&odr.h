//
// Created by solteszistvan on 2023.01.15..
//

#ifndef CPPLANGUAGE_DEF_ODR_H
#define CPPLANGUAGE_DEF_ODR_H

class PropLogic{ //A class definition of Proplogic
    class Statement; //A subclass definition of Statement in the class PropLogic
    class Not;
    class Implication;

    Statement* statements; //A member variable declaration which is a pointer to a subclass of PropLogic

    Statement ModusPonens(Implication I, Statement S); /*
 * A member function declaration with return value of a subclass of the class which contains it. It's parameter's types
 * are subclasses of the class PropLogic.
 * */
};
class FirstOrderLogic : PropLogic{}; /*
 * A DEFINITION of the class FirstOrderLogic which inherits from PropLogic.
 * PropLogic is the base class of FirstOrderLogic
 * Problem: Declaration can't be made with inheritance specified.
 * */

class Gosser getGosser(class Store s, class Agent a); /*
 * Declares the function getGosser with declared return type Gosser.
 * It's parameter list cintains a name s whose type is of Store that has been declared in the parameter list, and
 * a variable name a whose class has been defined in the parameter list of the declared function too.
 */
Gosser fillGosser(class Beer beer); // In this line of code we used the declaration of the Gosser class
// used in the declaration of getGosser function in line 26 similarly to that declaration, Beer has been declared inside
//fillGosser's parameters

class BinaryStream convertWebPageToBinaryStream(class WebPage page);

class AST code2AST(class CPPCode code);
class T testfunction(int randomparameter);
class T{};
class T testfunction2(int randomparameter);

class CPPCode{
private:
    char* name;
    char* extension;
    char* content;
    //class member access operator applied to an expression of type T requires T to be complete
public:
    bool compilable();
    int declarations(); //Outputs the number of declarations
    float cyclomaticComplexity();//Outputs the cyclomatic complexity of the code
    bool spaghetti(); //Decides whether the code is spaghetti or not

    bool isRelated(class Code code); //Decides whether a code as an input is related to the given instance
    Code* relatedCode(class Directory root); //Outputs all related code given a root directory
};

class Graph{
protected:
    class Node; //A declared but not defined class is an incompletely defined class.
    class Edge;
private:
    Node* nodes;
    Edge* edges;

public:
    Graph(Node* nodes, Edge* edges);
    Graph(int nodes, int edges);

    bool in(Node n);
    bool isSubgraph(Graph G);

    bool Bipartite();

    int cycles();
    int clicques();
    bool colorable(int n);

};

class Base{
public:
    virtual void f();
};
class Inherited1 : public Base{
public:
    void f();
};
class Inherited2 : public Inherited1{};

void test1();
/*
 * Classes can't inherit from Graph as long as it has incomplete types including it's declared but not defined subclasses.
 * Node is required to be templated.
 */
#endif //CPPLANGUAGE_DEF_ODR_H

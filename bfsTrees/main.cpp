#include<iostream>
#include<set>
#include<unordered_set>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

template<typename T>
class Node{
   T name;
   vector<Node*> childrens;
public:
    Node(T n1):name(n1){}

    Node* addChildren(T n1){
        Node* temp=new Node(n1);
        childrens.push_back(temp);
        return temp;
    }

    T getName(){
        return name;
    }

    vector<Node*> getChildren(){
        return childrens;
    }
};

template<typename T>
list<T> bfs(Node<T>* root){
    list<Node<T>*> unvisited;
    list<T> visted;
    //step1: push the root node to univisted
    unvisited.push_back(root);
    //step2: until unvissted is empty push all the elements to visted from unvisisted
    while(!unvisited.empty()){
        for(Node<T>* node:unvisited) {
            visted.push_back(node->getName());
        }
        list<Node<T>*> nextToVisit;
        for(Node<T>* node:unvisited) {
            for(Node<T>* eachChild:node->getChildren()){
                nextToVisit.push_back(eachChild);
            }
        }
        unvisited.clear();
        unvisited=nextToVisit;
    }
    return visted;
}


template<typename T>
list<T> dfs(Node<T>* root){
    list<Node<T>*> unvisited;
    list<T> visted;
    //step1: push the root node to univisted
    unvisited.push_back(root);
    //step2: until unvissted is empty push the front element to visted from unvisisted
    while(!unvisited.empty()){
        Node<T>* front = unvisited.front();
        visted.push_back(front->getName());
      Node<T>* temp = front;
      unvisited.pop_front();
      const vector<Node<T> *> &children = temp->getChildren();
      for(auto itr=children.rbegin(); itr!=children.rend();itr++) {
          unvisited.push_front(*itr);
      }
    }
    return visted;
}

int main() {
    Node<char> *root=new Node<char>('A');
    Node<char> *child1= root->addChildren('B');
    Node<char> *child2= root->addChildren('C');
    Node<char> *child1child1=child1->addChildren('D');
    Node<char> *child1child2=child1->addChildren('E');
    Node<char> *child2child1=child2->addChildren('F');
    Node<char> *child2child2=child2->addChildren('G');
    list<char> res= bfs<char>(root);
    cout<<"BFS IS:"<<endl;
    for(auto itr:res){
        cout<<itr<<",";
    }
    list<char> res1= dfs<char>(root);
    cout<<endl;
    cout<<"DFS IS:"<<endl;
    for(auto itr:res1){
        cout<<itr<<",";
    }
    return 0;
}
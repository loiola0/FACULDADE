#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <cassert>
#include <vector>
#include <lab1.hpp>

int main(){
  using BST = BSTree<std::string, int>;
  
  std::cout << "funcionando......" << std::endl;
  BST bst{};
 
  
  assert(bst.isEmpty());
  

 


  auto vec = BST::inOrderVetor(bst);
  
 std::fstream file;//saida(programa-saída)

  std::string filename;//armazena o nome do arquivo

  std::cout <<"digite o nome do progama e sua respectiva extensão.EX:arquivo.txt"<<std::endl;
  std::cin >> filename;//recebe o nome arquivo informado pelo usuario

  std::string word;

  file.open(filename.c_str());

  while (file >> word){
    if(bst.search(word)){
        bst.update(word);
    }else{
        bst.insert(word,1);
    }
  }

  file.close();

  bst.printInOrder();

  return 0;
}

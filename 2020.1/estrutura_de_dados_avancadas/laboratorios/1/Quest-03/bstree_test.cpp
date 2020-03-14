#include <vector>
#include <iostream>
#include <cassert>
#include <vector>
#include <bstree.hpp>

int main(){
  using BST = BSTree<int, std::string>;
  
  std::cout << "funcionando......" << std::endl;
  BST bst{};
 
  
  assert(bst.isEmpty());
  

  bst.insert(7, "node");
  bst.insert(5, "L");
  bst.insert(6, "LD");
  bst.insert(4, "LL");
  bst.insert(9, "D");
  bst.insert(8, "DL");
  bst.insert(10, "DD");



  //TESTES QUESTÃO 03

  auto vec = BST::posOrderVetor(bst);//guardo vetor retornado da função
  
  std::cout << "Imprimindo Vetor da posOrder"<< std::endl;

  for (auto e : vec){//imprimo os valores do vetor
    std::cout << e.first << " " << e.second << std::endl;
  }

  std::cout << std::endl;

  bst.update(5,"hahaha");
  bst.update(6,"valor");
  bst.update(7,"t de teste");

  assert(bst.search(6)=="valor");
  assert(bst.search(7)=="t de teste");
  assert(bst.search(5)=="hahaha");

  bst.remove(5);
  assert(bst.search(5)==std::nullopt);
  
  auto h = BST::inOrderVetor(bst);//colocando os em um vetor de pair

  std::cout << "Imprimindo Vetor da InOrder"<< std::endl;

  for (auto h : vec){//imprimo os valores do vetor
    std::cout << h.first << " " << h.second << std::endl;
  }  
  std::cout << std::endl;
  return 0;
}

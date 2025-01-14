#include <iostream>

int main() {
  //initialise variables
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int answer1, answer2, answer3,answer4 ;

  std::cout << "==============\n";
  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "=====================\n\n";
 // question 1 op
  std::cout << "When I'm dead, I want people to remember me as:\n";
  std::cout << " 1) The Good\n";
  std::cout << " 2) The Bad \n";
  std::cout << " 3) The Wise \n";
  std::cout << " 4) The Bold\n\n";
 // question 1 answer 
  std::cin >> answer1;

  switch(answer1){
    case 1:
      hufflepuff = hufflepuff + 1 ;
      break;
    case 2:
      slytherin = slytherin + 1 ;
      break;
    case 3:
      ravenclaw = ravenclaw + 1 ;
      break;
    case 4:
      gryffindor = gryffindor + 1 ;
      break;
    default:
      std:: cout << "Invalid Input";
  }

  //question 2 op
  std::cout << "Dawn or Dusk? \n";
  std::cout << " 1) Dawn \n";
  std::cout << " 2) Dusk \n";
  //question 2 ip
  std:: cin >> answer2;

  switch(answer2){
    case 1: 
      gryffindor = gryffindor + 1;
      ravenclaw = ravenclaw + 1;
      break;
    case 2:
      slytherin = slytherin + 1;
      hufflepuff = hufflepuff + 1; 
      break; 
    default:
    std:: cout << "Invalid Input";
  
  }
  //question 3 op
  std::cout << "Which kind of instrument most pleases your ear? \n";
  std::cout << " 1) The Violin \n";
  std::cout << " 2) The Trumpet \n";
  std::cout << " 3) The Piano \n";
  std::cout << " 4) The Drum \n\n";
  //question 3 ip
  std::cin >> answer3;
  
  switch(answer3){
    case 1:
      slytherin = slytherin + 1 ;
      break;
    case 2:
      hufflepuff = hufflepuff + 1 ;
      break;
    case 3:
      ravenclaw = ravenclaw + 1 ;
      break;
    case 4:
      gryffindor = gryffindor + 1 ;
      break;
    default:
      std:: cout << "Invalid Input";
  }

  //question 4 op
  std::cout << " Which road tempts you most? \n";
  std::cout << " 1) The wide, sunny grassy lane \n";
  std::cout << " 2) The narrow, dark, lantern-lit alley \n";
  std::cout << " 3) The twisting, leaf-strewn path through woods \n";
  std::cout << " 4) The cobbled street lined (ancient buildings) \n\n";
  //question 4 ip
  std::cin >> answer4;

   switch(answer4){
    case 1:
      hufflepuff = hufflepuff + 1 ;
      break;
    case 2:
      slytherin = slytherin + 1 ;
      break;
    case 3:
      gryffindor = gryffindor + 1 ;
      break;
    case 4:
      ravenclaw = ravenclaw + 1 ;
      break;
    default:
      std:: cout << "Invalid Input";
  }
  
  //calc max for house

  int max = 0;
  std::string house; 
  
  if (gryffindor > max) {
  
  max = gryffindor;
  house = "Gryffindor";
  
}

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";
  
}

if (ravenclaw > max) {
  
  max = ravenclaw;
  house = "Ravenclaw";
  
}

if (slytherin > max) {
  
  max = slytherin;
  house = "Slytherin";
  
}

std::cout << house << "!\n";



}
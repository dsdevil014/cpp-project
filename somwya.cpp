#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


#define MAX_QUESTION 256
#define MAX_ANSWER 128



#define TOTAL_QUESTIONS 10


struct quiz_question
{
  char question[MAX_QUESTION];
  char answerA[MAX_ANSWER];
  char answerB[MAX_ANSWER];
  char answerC[MAX_ANSWER];
  char answerD[MAX_ANSWER];
  char correct_answer;
};

int main()
{
  
  quiz_question quiz[TOTAL_QUESTIONS];
  
 
  strcpy(quiz[0].question, "who invented c++ in 1979?");
  strcpy(quiz[0].answerA, "Dennis Ritchie");
  strcpy(quiz[0].answerB, "Ken Thompson");
  strcpy(quiz[0].answerC, "Brian Kernighan");
  strcpy(quiz[0].answerD, "Bjarne Stroustup");
  quiz[0].correct_answer = 'D';
  
  strcpy(quiz[0].question,"What is C++?");
  strcpy(quiz[1].answerA, "C++ is an object oriented programming language");
  strcpy(quiz[1].answerB, "C++ is a procedural programming language");
  strcpy(quiz[1].answerC, "C++ supports both procedural and object oriented programming language");
  strcpy(quiz[1].answerD, "C++ is a functional programming language");
  quiz[1].correct_answer = 'C';
  
  // Create the third quiz question
  strcpy(quiz[2].question, "Which of the following is not a type of Constructor in C++?");
  strcpy(quiz[2].answerA, "Default constructor");
  strcpy(quiz[2].answerB, "Parameterized constructor");
  strcpy(quiz[2].answerC, "Copy constructor");
  strcpy(quiz[2].answerD, "Friend constructor");
  quiz[2].correct_answer = 'D';
  
  // Create the fourth quiz question
  strcpy(quiz[3].question, "Which of the following approach is used by C++?");
  strcpy(quiz[3].answerA, "Left-right");
  strcpy(quiz[3].answerB, "Right-left");
  strcpy(quiz[3].answerC, "Bottom-up");
  strcpy(quiz[3].answerD, "Top-down");
  quiz[3].correct_answer = 'C';
  
  
  strcpy(quiz[4].question, "Which of the following data type is supported in C++ but not in C?");
  strcpy(quiz[4].answerA, "int");
  strcpy(quiz[4].answerB, "bool");
  strcpy(quiz[4].answerC, "double");
  strcpy(quiz[4].answerD, "Float");
  quiz[4].correct_answer = 'B';

   strcpy(quiz[5].question,"Which of the following is “address of operator?");
   strcpy(quiz[5].answerA,"* ");
   strcpy(quiz[5].answerB,"& ");
   strcpy(quiz[5].answerC,"[] ");
   strcpy(quiz[5].answerD,"&& ");
   quiz[5].correct_answer='B';

   strcpy(quiz[6].question,"Choose the correct option which is mandatory in a function?");
   strcpy(quiz[6 ].answerA,"return_type ");
   strcpy(quiz[6].answerB,"parameters ");
   strcpy(quiz[6 ].answerC,"function_name ");
   strcpy(quiz[6].answerD,"both a and c ");
    quiz[6].correct_answer='D';
    
    strcpy(quiz[7 ].question,"If same message is passed to objects of several different classes and all of those can respond in a different way, what is this feature called?"); 
    strcpy(quiz[7].answerA,"inheritance ");
    strcpy(quiz[7 ].answerB,"overloading ");
    strcpy(quiz[7 ].answerC,"polymorphism ");
    strcpy(quiz[7 ].answerD,"overriding ");
    quiz[7].correct_answer='C';
    
    strcpy(quiz[8].question,"Which among the following can show polymorphism?  ");
    strcpy(quiz[8 ].answerA,"overloading || ");
    strcpy(quiz[8 ].answerB,"overloading += ");
    strcpy(quiz[8 ].answerC,"overloading << ");
    strcpy(quiz[8 ].answerD,"overloading && ");
    quiz[8].correct_answer='D';
    
    strcpy(quiz[9 ].question,"Run time polymorphism is supported by? ") ;
    strcpy(quiz[9 ].answerA,"function overloading ");
    strcpy(quiz[9 ].answerB,"operator overloading ");
    strcpy(quiz[9 ].answerC,"virtual function ");
    strcpy(quiz[9 ].answerD,"both a&c ");
    quiz[9].correct_answer='C';
    
    
  double total_correct = 0;
  
  // Declare variable to store the answers entered by the user
  char answer;
  
  
  for (int i = 0; i < TOTAL_QUESTIONS; i++)
  {
    // Output the question, including a 'question number' as given by i+1 for 
    // Question 1, Question 2, and so on.
    cout<<"Question"<<(i+1)<<":" <<quiz[i].question<<endl;
    
    // Output the possible answers as a menu of options A,B,C, or D
    cout << "A) " << quiz[i].answerA << std::endl;
    cout << "B) " << quiz[i].answerB << std::endl;
    cout << "C) " << quiz[i].answerC << std::endl;
    cout << "D) " << quiz[i].answerD << std::endl;

    cout << "\nEnter Answer (A,B,C or D): ";
    cin >> answer;

    if (toupper(answer) == quiz[i].correct_answer)
    {
     total_correct++;
     cout << "\n\nCorrect Answer!" << std::endl;
    }   
    else
    {
        cout << "\n\nIncorrect Answer!" << std::endl;
        cout << "\n\nThe correct answer was " << quiz[i].correct_answer << std::endl;
    }

    cout << "\n\n\n";
    
  }


//  cout<<"questions answered correctly"<<(int) total_correct<<TOTAL_QUESTIONS;
  cout<< total_correct<<"/"<<TOTAL_QUESTIONS<<"questions answered correctly"<<endl;

  

   
  cout<<(total_correct / TOTAL_QUESTIONS) * 100<<"%";

  return 0;
}

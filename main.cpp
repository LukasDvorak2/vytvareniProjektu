#include "windows.h"
#include "iostream"
#include "fstream"
using namespace std;
 
int main(int argc, char * argv[]){
   if(argc==2){
      const char *cesta =argv[1];
      CreateDirectory(cesta,NULL); //vytvořrní adresáře projektu
      ofstream sourceFile;
      string filePath = cesta;
      string projectName = cesta;
      filePath+= "\\main.cpp";
      cout<< "Cesta k souboru: " << filePath <<endl;
      sourceFile.open(filePath);
      sourceFile<<"#include \"iostream\"\n" "#include \"color.h\" \n" "using namespace std;\n\n" "int main(int argc, char *argv[]){\n\nreturn 0;\n}" ;
      sourceFile.close();
      sourceFile.open(projectName+"\\color.h");
sourceFile << "#define RESET \"\033[0m\" \n";   
sourceFile <<"#define BLACK \"\033[30m\" /* Black */} }\n";
sourceFile <<"#define RED \"\033[31m\" /* Red */ \n";
sourceFile <<"#define GREEN \"\033[32m\" /* Green */ \n";
sourceFile <<"#define YELLOW \"\033[33m\" /* Yellow */ \n";
sourceFile <<"#define BLUE \"\033[34m\" /* Blue */ \n";
sourceFile <<"#define MAGENTA \"\033[35m\" /* Magenta */ \n";
sourceFile <<"#define CYAN \"\033[36m\" /* Cyan */ \n";
sourceFile <<"#define WHITE \"\033[37m\" /* White */ \n";
sourceFile <<"#define BOLDBLACK \"\033[1m\033[30m\" /* Bold Black */ \n";
sourceFile <<"#define BOLDRED \"\033[1m\033[31m\" /* Bold Red */ \n";
sourceFile <<"#define BOLDGREEN \"\033[1m\033[32m\" /* Bold Green */ \n";
sourceFile <<"#define BOLDYELLOW \"\033[1m\033[33m\" /* Bold Yellow */ \n";
sourceFile <<"#define BOLDBLUE \"\033[1m\033[34m\" /* Bold Blue */ \n";
sourceFile <<"#define BOLDMAGENTA \"\033[1m\033[35m\" /* Bold Magenta */ \n";
sourceFile <<"#define BOLDCYAN \"\033[1m\033[36m\" /* Bold Cyan */ \n";
sourceFile <<"#define BOLDWHITE \"\033[1m\033[37m\" /* Bold White */ \n";
            sourceFile.close();
      }else cout<<"zadal jsi nespravny pocet parametru\n";
   return 0;
}
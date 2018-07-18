#include <iostream>
#include<cstring>

using namespace std;
 /**
my simple version of the strstr function of the ctype library...
This code can be copied and is open for reviews..
by Tomoloju Victor......
email->tomoloju45@gmail.com...
std::vector was intentionally not used in this program....
 */
char *dis_find(const char *t , const char *a){

unsigned init(0),
 temp(0) , count_t(0);

 for(int i = 0 ;i!=strlen(t); ++i){

    if(a[init] == t[i]){

        if(init == 0){
            temp = i;            /// sets temp to the index value of where the ist char of ->a
                                /// was found in ->t;
    }
        ++init;
        ++count_t;
    }

    else{
        init = 0;
        count_t = 0;
    }

    if(init == strlen(a)){
        break;
    }

    if(i == strlen(t)-1 && init!=strlen(a)){
          init = 0;
        count_t =0;
    }

 }

 if(init>0){

    size_t get_size = strlen(t) - temp;

  char *point_char = nullptr;
  point_char = new char[get_size];


    for(int i = temp , che = 0; i<strlen(t) ; ++i,++che){

        point_char[che] = t[i];
        }
       point_char[get_size] = '\0';


    return point_char;
    delete [] point_char;
    point_char = nullptr;

 }
 else{
    return nullptr;
 }

}///..
int main()
{
   char vic[] = "c++ programmers are awesome";

   std::cout<<dis_find(vic,"programmers")<<std::endl; /// my version....


    std::cout<<strstr(vic,"programmers")<<std::endl;  /// the strstr function
return 0;
}

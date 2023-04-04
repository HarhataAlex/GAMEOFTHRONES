#include <iostream>
#include <string.h>
bool verificare_sir(std::string sir)
{
    bool palindrom = false;
    char c;
    int par = 0;
    int impar = 0;
    int contor = 0;
    const int marime = sir.size();
    for (char i='a' ; i<'z';i++)
    {   
        for (int j=0;j<sir.size();j++)
        {
            if (sir[j]==i)
            {
                contor++;
            }
        }
        if (contor =! 0 )
        {
            if(contor%2==0)
                par ++;
            else
                impar ++;
        }
        if(marime % 2 == 0 && par == 0 || marime %2==1 && par ==1)
            palindrom = true;
    }
    return palindrom;
}
int main()
{
  std::string sir;
  std::cout <<"introduceti sirul de litere pentru a verifica daca e palindrom"<< std::endl;
  std::getline(std::cin, sir);
  if(verificare_sir(sir))  
    std::cout << "Sirul poate fi palindrom\n" ; 
  else   
    std::cout << "Sirul poate fi palindrom\n";   
  return 0;
}
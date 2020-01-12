// usage of transfor demonstrated over here

#include <string>
#include <algorithm>

std::string DNAStrand(const std::string & input)
{
   std::string result;
   result.resize(input.length());
   
   std::transform(input.cbegin(), input.cend(),
                  result.begin(),
                  [] (char ch)
                  {
                     switch(ch)
                     {
                        case 'A': return 'T';
                        case 'T': return 'A';
                        case 'C': return 'G';
                        case 'G': return 'C';
                     }
                  });
   
   return result;
}

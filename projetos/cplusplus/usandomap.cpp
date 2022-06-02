#include <iostream>
#include <map>

int main(){
  std::pair<std::string,std::string> par_teste("sol","lua");
  std::map<int, std::pair<std::string,std::string>> mapa;
  
  mapa[123] = par_teste;
  mapa[22] = par_teste;
  mapa[43] = par_teste;
  mapa[43213] = par_teste;
  mapa[1235] = par_teste;
  
  for (auto it = mapa.begin();it != mapa.end(); it++){
        std::cout << it->first << " = " << it->second.first << '\n';
  }

  return 0;
}

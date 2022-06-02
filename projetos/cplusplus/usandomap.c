#include <iostream>
#include <map>

int main(){
  std::map<int, std::string> mapa;
  
  mapa[123] = "Oliveira";
  mapa[22] = "Root";
  mapa[43] = "User";
  mapa[43213] = "jean";
  mapa[1235] = "teste";
  
  for (auto it = mapa.end();it != mapa.begin(); --it){
        std::cout << it->first << " = " << it->second << '\n';
  }

  return 0;
}

#include <iostream>
// #include <string.h>
// #include <stdexcept>
// #include <cctype>
// #include <map>
#include <algorithm> //find
// #include <cstring>
#include "Command.hpp"

void Name::validate(string name)
{
    if(name.size() > 30){
        throw invalid_argument("O nome deve ter até 30 caracteres");
    }

    // char c = ' ';
    if (!name.find(' ')){
        throw invalid_argument("O nome deve ter nome e sobrenome");
    }

    char x = 'f';

    for(char letter : name){
        if(isalpha(letter) == 0 && (letter != ' ' || letter != '.')){
            throw invalid_argument("Cada caractere deve ser letra(A-Z ou a-z), ponto(.) ou espaco em branco.");
        }

        if((x == 'f' || x == ' ') && isupper(letter) == 0){
            throw invalid_argument("Primeiro caractere de nome e sobrenome deve ser maiusculo");
        }
        if((x != 'f' || x != ' ') && isupper(letter) == 1){
            throw invalid_argument("Todos os caracteres de nome e sobrenome devem ser minusculo menos o primeiro");
        }

        if(letter == ' ' && x == ' '){
            throw invalid_argument("Nao há espaçoes em branco em sequência.");
        }
        
        x = 'letter';
        
    }



}

void Name::setValue(string value){
    validate(value);
    this->value = value;

}

string City::Cities[19] = {"Antalya", "Bangkok", "Delhi", "Dubai", "Hong Kong", "Londres", "Macau", "Mumbai", "Paris", "Rio de Janeiro", "São Paulo", "Seul", "Istambul", "Kuala Lumpur", "Nova Iorque", "Osaka", "Phuket", "Shenzhen", "Tóquio"};

void City::validate(string value){ //melhorar essa função se tiver mais tempo
if (find(begin(value), end(value), Cities) == end(value))
    throw invalid_argument("Cidade invalida! Verifique as disponiveis.");
}

void City::setValue(string value){
    validate(value);
    this->value = value;

}

void Description::validate(string value){ 
    if(value.size() <= 0 || value.size() > 40){
        throw invalid_argument("A descrição deve ter no máximo 40 caracteres");
    }

    char x = 'f';
    for(char l : value){
        if(l == ' ' && x == ' '){
            throw invalid_argument("Nao pode haver espacos em branco em sequencia");
        }

        if((l == '.'|| l == ',' || l == ';' || l == ':' || l == '?' || l == '!' || l == '-')  
        && x == '.' ||  x == ',' || x == ';' || x == ':' || x == '?' || x == '!' || x == '-'){
            throw invalid_argument("Nao pode haver pontos(.) em branco em sequencia");
        }
        x = l;
    
    }
}

void Description::setValue(string value){
    validate(value);
    this->value = value;

}





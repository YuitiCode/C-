#include <iostream>
// #include <string.h>
// #include <stdexcept>
// #include <cctype>
// #include <map>
#include <algorithm> //find
// #include <cstring>
#include "Command.hpp"

string City::Cities[19] = {"Antalya", "Bangkok", "Delhi", "Dubai", "Hong Kong", "Londres", "Macau", "Mumbai", "Paris", "Rio de Janeiro", "Sao Paulo", "Seul", "Istambul", "Kuala Lumpur", "Nova Iorque", "Osaka", "Phuket", "Shenzhen", "Taquio"};

void City::validate(string value){ //melhorar essa função se tiver mais tempo
    if (find(begin(value), end(value), Cities) == end(value))
        throw invalid_argument("Cidade invalida! Verifique as cidades disponíveis.");
}

void City::setValue(string value){
    validate(value);
    this->value = value;

}

string Country::countries[12] = {"Estados Unidos", "Brasil", "China", "Coreia do Sul", "Emirados", "França", "India", "Japao", "Malasia", "Reino Unido", "Tailandia", "Turquia"};

void Country::validate(string value){ 
    if (find(begin(value), end(value), countries) == end(value))
        throw invalid_argument("País invalido! Verifique os países disponiveis.");
}

void Country::setValue(string value){
    validate(value);
    this->value = value;

}

string Language::language[10] = {"Ingles", "Chines Mandarim", "Hindi", "Espanhol", "Frances", "Arabe", "Bengali", "Russo", "Portugues", "Indonesio"};

void Language::validate(string value){ 
    if (find(begin(value), end(value), language) == end(value))
        throw invalid_argument("País invalido! Verifique os países disponiveis.");
}

void Language::setValue(string value){
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

void Note::validate(int value){
    if (value < 0 || value > 10){
        throw invalid_argument("Nota deve ter valor entre 0 e 10");
    }
}

void Note::setValue(int value){
    validate(value);
    this->value = value;

}

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

void Password::validate(string value){ //verificar validacoes, fiz muito rapido

    int upper, lower, numbers = 0;

    if(value.size() != 5)
        throw invalid_argument("A senha precisa ter 5 digitos.");

    for(char c : value){

        if (isalnum(c) != true){
            if(c != '!' && c != '#' && c != '%' && c != '$' && c != '&'){
                throw invalid_argument("Cada caractere só pode ser letra (A-Z ou a-z), dígito (0-9) ou caractere especial (! # $ % &).");
            }
        }

        if(isupper(c) != 0)
            upper ++;
        if(islower(c) != 0)
            lower ++;
        if(isdigit(c) != 0)
            numbers ++;
    }
    if(numbers == 0 || lower == 0 || upper == 0)
        throw invalid_argument("Deve haver ao menos uma letra maiúscula, minúscula e ao menos um número");
}

void Password::setValue(string value){
    validate(value);
    this->value = value;

}


//verificar se a validação ta completa
void Email::validate(string value){
    int counter = 0;
    int tamanho1, tamanho2 = 0;
    char c = ' ';

    if (value[0] == '@' || value[0] == '.'){
        throw invalid_argument("Email não pode começar com @ ou ponto");
    }
    if (value[-1] == '-'){
        throw invalid_argument("Hífen nao pode ser o ultimo caracter");
    }

    
    for (char l : value){
        tamanho1 += 1;
        if(counter == 0){
            if (l == '@'){
            counter += 1;
            }
        
        if (c == '.' && l == '-' && counter == 1){
            throw invalid_argument("Hífen nao pode ser o primeiro caracter depois do ponto");
        }

        if (c == '-' && l == '.' && counter == 1){
            throw invalid_argument("Hífen nao pode ser o ultimo caracter antes do ponto");
        }
        

        if (l == '.' && c == '.'){
            throw invalid_argument("Não pode haver dois pontos em sequência");
        }
        
        if (isalnum(l) != true && l != '-')
            if (counter == 1){
                throw invalid_argument("Email deve ser composto apenas por letra, numero ou hifen");
            }
            else if(l != '_' && l != '.'){
                throw invalid_argument("Email deve ser composto apenas por letra, numero, hifen, sublinhado ou ponto");
        }

        if (tamanho1 > 64 && counter == 0){
            throw invalid_argument("Email deve ter menos que 65 caracteres");
        }

        if (tamanho1 > 63 && counter == 1){
            throw invalid_argument("Email deve ter menos que 64 caracteres");
        }

        c = l;

        }
        
    }
    
}

void Email::setValue(string value){
    validate(value);
    this->value = value;

}
//olhar Luhn algorithm - Wikipedia e aplicar no ultimo caractere
void Code::validate(string value){
    if (value.size() > 11){
        throw invalid_argument("Código deve ter 11 caracteres");
    }

    for(int i = 0; value.size() - 1; i ++){
        if(isdigit(value[i]) != true){
            throw invalid_argument("Os 9 primeiros valores devem ser digitos");
        }
    }

}

void Code::setValue(string value){
    validate(value);
    this->value = value;

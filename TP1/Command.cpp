#include <iostream>
// #include <string.h>
// #include <stdexcept>
// #include <cctype>
#include <map>
// #include <cstring>
#include "Command.hpp"
// #include <bits/stdc++.h> se o codigo falhar no Luhn descomentar essa linha e a debaixo
// using namespace std;

//Valida��es criadas por Pedro Jos� Monteiro de Barros Ceva Rodrigues 190139315

string City::Cities[19] = {"Antalya", "Bangkok", "Delhi", "Dubai", "Hong Kong", "Londres", "Macau", "Mumbai", "Paris", "Rio de Janeiro", "Sao Paulo", "Seul", "Istambul", "Kuala Lumpur", "Nova Iorque", "Osaka", "Phuket", "Shenzhen", "Toquio"};

/// Cria��o de valida��o para cidade
void City::validate(string value){
    int c = 0;
    for(string l : Cities){
        if(l == value){
            c ++;
        }
    }
    if (c == 0)
        throw invalid_argument("Cidade invalida! Verifique as cidades dispon�veis.");
}

void City::setValue(string value){
    validate(value);
    this->value = value;

}

string Country::countries[12] = {"Estados Unidos", "Brasil", "China", "Coreia do Sul", "Emirados", "Fran�a", "India", "Japao", "Malasia", "Reino Unido", "Tailandia", "Turquia"};

/// Cria��o de valida��o para Pa�s
void Country::validate(string value){
    int c = 0;
    for(string l : countries){
        if(l == value){
            c ++;
        }
    }
    if (c == 0)
        throw invalid_argument("Pa�s invalido! Verifique os pa�ses disponiveis.");
}

void Country::setValue(string value){
    validate(value);
    this->value = value;

}

string Language::language[10] = {"Ingles", "Chines Mandarim", "Hindi", "Espanhol", "Frances", "Arabe", "Bengali", "Russo", "Portugues", "Indonesio"};

/// Cria��o de valida��o para linguagem

void Language::validate(string value){
    int c = 0;
    for(string l : language){
        if(l == value){
            c ++;
        }
    }
    if (c == 0)
        throw invalid_argument("Pa�s invalido! Verifique os pa�ses disponiveis.");
}

void Language::setValue(string value){
    validate(value);
    this->value = value;

}


/// Cria��o de valida��o para descri��o
void Description::validate(string value){
    if(value.size() <= 0 || value.size() > 40){
        throw invalid_argument("A descri��o deve ter no m�ximo 40 caracteres");
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

/// Cria��o de valida��o para nota
void Note::validate(int value){
    if (value < 0 || value > 10){
        throw invalid_argument("Nota deve ter valor entre 0 e 10");
    }
}

void Note::setValue(int value){
    validate(value);
    this->value = value;

}

/// Cria��o de valida��o para nome
void Name::validate(string name)
{
    if(name.size() > 30){
        throw invalid_argument("O nome deve ter at� 30 caracteres");
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
            throw invalid_argument("Nao h� espa�oes em branco em sequ�ncia.");
        }

        x = 'letter';

    }

}

void Name::setValue(string value){
    validate(value);
    this->value = value;

}

/// Cria��o de valida��o para senha
void Password::validate(string value){

    int upper, lower, numbers = 0;

    if(value.size() != 5)
        throw invalid_argument("A senha precisa ter 5 digitos.");

    for(char c : value){

        if (isalnum(c) != true){
            if(c != '!' && c != '#' && c != '%' && c != '$' && c != '&'){
                throw invalid_argument("Cada caractere s� pode ser letra (A-Z ou a-z), d�gito (0-9) ou caractere especial (! # $ % &).");
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
        throw invalid_argument("Deve haver ao menos uma letra mai�scula, min�scula e ao menos um n�mero");
}

void Password::setValue(string value){
    validate(value);
    this->value = value;

}


//verificar se a valida��o ta completa
/// Cria��o de valida��o para email
void Email::validate(string value){
    int counter = 0;
    int tamanho1, tamanho2 = 0;
    char c = ' ';

    if (value[0] == '@' || value[0] == '.'){
        throw invalid_argument("Email n�o pode come�ar com @ ou ponto");
    }
    if (value[-1] == '-'){
        throw invalid_argument("H�fen nao pode ser o ultimo caracter");
    }


    for (char l : value){
        tamanho1 += 1;
        if(counter == 0){
            if (l == '@'){
            counter += 1;
            }

        if (c == '.' && l == '-' && counter == 1){
            throw invalid_argument("H�fen nao pode ser o primeiro caracter depois do ponto");
        }

        if (c == '-' && l == '.' && counter == 1){
            throw invalid_argument("H�fen nao pode ser o ultimo caracter antes do ponto");
        }


        if (l == '.' && c == '.'){
            throw invalid_argument("N�o pode haver dois pontos em sequ�ncia");
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

/// Cria��o de valida��o para c�digo
void Code::validate(string value){
    if (value.size() > 11){
        throw invalid_argument("C�digo deve ter 11 caracteres");
    }

    for(int i = 0; value.size() - 1; i ++){
        if(isdigit(value[i]) != true){
            throw invalid_argument("Os 9 primeiros valores devem ser digitos");
        }
    }

    /// Luhn Algorithm
    int number = value.length();
    int nSum = 0;
    int isSecond = false;

    for (int i = number - 1; i >= 0; i--) {

        int d = value[i] - '0';

        if (isSecond == true){
            d = d * 2;
        }

        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }
    if(nSum % 10 != 0){
        throw invalid_argument("Digito de verifica��o est� errado");
    }
}

void Code::setValue(string value){
    validate(value);
    this->value = value;

}

/// Cria��o de valida��o para data
void Date::validate(string value){
    map<string,int> months = {
        {"Jan", 31},{"Fev", 28},{"Mar", 31},{"Abr", 30},{"Mai",31},{"Jun",30},{"Jul",31},{"Ago",31},{"Set",30},{"Out",31},{"Nov",30},{"Dez",31}
    };

    if(value.size() != 6 && value[2] != '/'){
        throw invalid_argument("Formato de data errado.");
    }

    string month = value.substr(3,3);
    int day = stoi(value.substr(0,2));

    if(months.find(month) == months.end()) {
        throw invalid_argument("Formato invalido de data!");
    }
    if (day > months[month]){
        throw invalid_argument("Formato invalido de data!");
    }
}

void Date::setValue(string value){
    validate(value);
    this->value = value;

}

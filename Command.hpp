#include <iostream>

using namespace std;

/// @brief Representacao de Name:
///
/// Contem nome e sobrenome
/// Ate 30 caracteres
/// Todo caracter consiste em uma letra de A-Z, a-z ou espaco em branco
/// Nao havera espaco em branco em sequencia
/// O primeiro caracter de nome e sobrenome eh sempre maiusculo e o restante minusculo
///
// Classe Name criado por Thiago Yuiti 202042702

class Name{
    private:
        string value;
        void validate(string value);

    public:
        ///
        /// Armazena o nome informado caso seja valido
        ///
        /// Lança exceção caso o nome nao esteja de acordo com as regras de formato
        ///
        /// @param valor nome
        ///
        /// @throw invalid_argument
        ///
        void setValue(string value);

        ///
        /// Retorna o nome armazenado
        ///
        /// @return nome
        ///
        string getValue() const;

};

/// @brief Representacao de email
///
/// - Formato 'parte-local@dominio', onde parte local possui ate 64 caracteres
/// - Caracter pode ser letra A-Z, a-z e digitos 0-9
/// - Caracter pode ser um '-', '_' ou '.' desde que seja seguido de letra ou digito
/// - '.' nao pode ser o primeiro caracter
/// - Nome de dominio consiste em uma lista de termos separados por '.'
/// - '.' nao pode aparecer em seguida ou no primeiro caracter de dominio
/// - Nao ha ponto como primeiro ou ultimo caracter ou em sequencia.
/// - Cada termo é composto por ate 63 caracteres
/// - Caracter do termo pode ser letra A-Z, a-z e digitos 0-9
/// - '-' pode ser utilizado caso nao seja o primeiro ou o ultimo caractere
///
// Classe Email criado por Thiago Yuiti 202042702

class Email{
    private:
        string value;
        void validate(string value);

    public:
        ///
        /// Armazena o email informado caso seja valido
        ///
        /// Lança exceção caso o email nao esteja de acordo com as regras de formato
        ///
        /// @param value email
        ///
        /// @throw invalid_argument
        ///

        void setValor(string valor);

        ///
        /// Retorna o email armazenado
        ///
        /// @return email
        ///
        string getValor() const;

};
///
/// @brief Representacao de senha
///
/// - Formato XXXXX onde X eh letra A-Z, a-z, digito 0-9 ou caracter especial;
/// - Eh necessario pelo menos uma letra minuscula, uma letra maiuscula e um digito.
///
// Classe Password criado por Thiago Yuiti 202042702
class Password{
    private:
        string value;
        void validate(string value);

    public:
        ///
        /// Armazena a senha informada caso seja valida
        ///
        /// Lança exceção caso a senha nao esteja de acordo com as regras de formato
        ///
        /// @param valor senha
        ///
        /// @throw invalid_argument
        ///
        void setValue(string value);

        ///
        /// Retorna a senha armazenada
        ///
        /// @return senha
        ///
        string getValue() const;

};
///
/// @brief Representacao de idioma
///
/// - Idiomas disponiveis: Inglês, Chinês, Mandarim, Hindi, Espanhol, Francês, Árabe, Bengali, Russo, Português, Indonésio;
/// - Desconsiderar acentuaçao dos idiomas.
// Classe Language criado por Thiago Yuiti 202042702
class Language{
    private:
        static string language[11]; // vetor contendo linguagens validas
        string value;
        void validate(string value);
    public:
        ///
        /// Armazena o idioma informada caso seja valido.
        ///
        /// Lança exceção caso o idioma nao esteja de acordo com as regras de formato
        ///
        /// @param valor idioma
        ///
        /// @throw invalid_argument
        ///
        void setValue(string value);

        ///
        /// Retorna o idioma armazenada.
        ///
        /// @return idioma
        ///
        string getValue() const;
};
///
/// @brief Representacao de data
///
/// - Formato DD-MES-AAAA;
/// - DD de 1 a 31;
/// - Mes - JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ;
// Classe Date criado por Thiago Yuiti 202042702

class Date{
    private:
        static string month[12]; // vetor contendo meses validos
        string value;
        void validate(string value);
    public:
        ///
        /// Armazena a data informada caso seja valida.
        ///
        /// Lança exceção caso a data nao esteja de acordo com as regras de formato
        ///
        /// @param valor data
        ///
        /// @throw invalid_argument
        ///
        void setValue(string value);

        ///
        /// Retorna a data armazenada.
        ///
        /// @return data
        ///
        string getValue() const;

};
///
/// @brief Representacao de descricao
///
/// - Contem de 0 a 40 caracteres
/// - Sem espaços ou pontos em sequencia
/// - Nao contem caracteres de pontuacao em sequencia
// Classe Description criado por Thiago Yuiti 202042702

class Description{
    private:
        string value;
        void validate(string value);
    public:

        ///
        /// Armazena a descricao informada caso seja valida
        ///
        /// Lança exceção caso a descricao nao esteja de acordo com as regras de formato
        ///
        /// @param valor descricao
        ///
        /// @throw invalid_argument
        ///
        void setValue(string value);

        ///
        /// Retorna a descricao armazenada
        ///
        /// @return descricao
        ///
        string getValue() const;

};
///
/// @brief Representacao de codigo
///
/// - Formato DDDDDDDDDDX
/// - D eh um digito 0-9
/// - X eh digito verificador seguindo o Algoritmo de Luhn
// Classe Code criado por Thiago Yuiti 202042702

class Code{
    private:
        string value;
        void validate(string value);
    public:
        ///
        /// Armazena o codigo informado caso seja valido
        ///
        /// Lança exceção caso o codigo nao esteja de acordo com as regras de formato
        ///
        /// @param valor codigo
        ///
        /// @throw invalid_argument
        ///
        void setValue(string value);
        ///
        /// Retorna o codigo armazenado
        ///
        /// @return codigo
        ///
        string getValue() const;

};
///
/// @brief Representacao de cidade
///
/// - Cidades disponiveis: Antalya, Bangkok, Delhi, Dubai, Hong Kong, Londres, Macau, Mumbai, Paris, Rio de Janeiro, Sao Paulo, Seul, Istambul, Kuala Lumpur, Nova Iorque, Osaka, Phuket, Shenzhen,  Toquio
///
// Classe City criado por Thiago Yuiti 202042702
class City{
    private:
        static string Cities[19]; // Lista de cidades validas
        string value;
        void validate(string value);
    public:
        ///
        /// Armazena a cidade informada caso seja valida.
        ///
        /// Lança exceção caso a cidade nao esteja de acordo com as regras de formato
        ///
        /// @param valor cidade
        ///
        /// @throw invalid_argument
        ///
        void setValue(string value);

        ///
        /// Retorna a cidade armazenada.
        ///
        /// @return cidade
        ///
        string getValue() const;

};

///
/// @brief Representacao de pais
///
/// - Paises disponiveis: Estados Unidos, Brasil, China, Coreia do Sul, Emirados, França, India, Japao, Malasia, Reino Unido, Tailandia, Turquia
/// - Desconsiderar Acentuacao
///
// Classe Country criado por Thiago Yuiti 202042702

class Country{
    private:
        static string countries[12]; // Lista de paises validas
        string value;
        void validate(string value);
    public:
        ///
        /// Armazena o pais informado caso seja valido.
        ///
        /// Lança exceção caso o pais nao esteja de acordo com as regras de formato
        ///
        /// @param valor pais
        ///
        /// @throw invalid_argument
        ///
        void setValue(string value);

        ///
        /// Retorna o pais armazenado.
        ///
        /// @return cidade
        ///
        string getValue() const;

};
///
/// @brief Padrao para representacao de nota
///
/// - Numero de 0 a 10.
///
// Classe Note criado por Thiago Yuiti 202042702

class Note{
    private:
        int value;
        void validate(int);
    public:
        ///
        /// Armazena a nota informada caso seja valida.
        ///
        /// Lança exceção caso a nota nao esteja de acordo com as regras de formato
        ///
        /// @param valor nota
        ///
        /// @throw invalid_argument
        ///
        void setValue(int);

        ///
        /// Retorna a nota armazenada
        ///
        /// @return nota
        ///
        int getValue() const;

};

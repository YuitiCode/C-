#ifndef TESTESDOMINIOS_HPP_INCLUDED
#define TESTESDOMINIOS_HPP_INCLUDED

#include <iostream>
#include <string.h>

#include "Command.hpp"

using namespace std;

/// @brief Declaracao de classe de teste de unidade do domínio Nome
// Classe Name criado por Thiago Yuiti 202042702
class UTName {
private:

    /// Definições de constantes para evitar números mágicos.

    const string VALID_VALUE = "Pedro Jose.";
    const string INVALID_VALUE = "Pedro.jose";

    /// Referência ao objeto a ser testado
    Name *name;

    /// Estado do teste
    int status;

    /// Declarações de métodos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Definições de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do domínio Email
// Classe Name criado por Thiago Yuiti 202042702
class UTEmail{
private:

    /// Definições de constantes para evitar números mágicos.

    const string VALID_VALUE = "Pedro.jose@away.com.br";
    const string INVALID_VALUE = "pedro@jose@gmail.com";

    /// Referência ao objeto a ser testado
    Email *email;

    /// Estado do teste
    int status;

    /// Declarações de métodos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

/// Definições de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do domínio Senha
// Classe Name criado por Thiago Yuiti 202042702
class UTPassword{
private:

    /// Definições de constantes para evitar números mágicos.

    const string VALID_VALUE = "Am&43";
    const string INVALID_VALUE = "Abc12";

    /// Referência ao objeto a ser testado
    Password *password;

    /// Estado do teste
    int status;

    /// Declarações de métodos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Definições de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do domínio Idioma
// Classe Name criado por Thiago Yuiti 202042702
class UTLanguage{
private:
    /// Definições de constantes para evitar números mágicos.

    const string VALID_VALUE = "Chines Mandarim";
    const string INVALID_VALUE = "Japones";

    /// Referência ao objeto a ser testado
    Language *language;

    /// Estado do teste
    int status;

    /// Declarações de métodos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Definições de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};


/// @brief Declaracao de classe de teste de unidade do domínio Codigo
// Classe Name criado por Thiago Yuiti 202042702
class UTCode{
private:

    /// Definições de constantes para evitar números mágicos.

    const string VALID_VALUE = "6234561";
    const string INVALID_VALUE = "1234568";

    /// Referência ao objeto a ser testado
    Code *code;

    /// Estado do teste
    int status;

    /// Declarações de métodos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Definições de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};
/// @brief Declaracao de classe de teste de unidade do domínio Data
// Classe Name criado por Thiago Yuiti 202042702
class UTDate{
private:
    /// Definições de constantes para evitar números mágicos.

    const string VALID_VALUE = "29/Fev";
    const string INVALID_VALUE = "29/Fev/98";

    /// Referência ao objeto a ser testado
    Date *date;

    /// Estado do teste
    int status;

    /// Declarações de métodos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Definições de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};
/// @brief Declaracao de classe de teste de unidade do domínio Descricao
// Classe Name criado por Thiago Yuiti 202042702
class UTDescription{
private:

    /// Definições de constantes para evitar números mágicos.

    const string VALID_VALUE = "Teste de unidade de descricao para TP1.";
    const string INVALID_VALUE = "Teste de unidade de descricao para  TP1.";

    /// Referência ao objeto a ser testado
    Description *description;

    /// Estado do teste
    int status;

    /// Declarações de métodos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Definições de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do domínio Nota
// Classe Name criado por Thiago Yuiti 202042702
class UTNote{
private:

    /// Definições de constantes para evitar números mágicos.

    const int VALID_VALUE = 5;
    const int INVALID_VALUE = 11;

    /// Referência ao objeto a ser testado
    Note *note;

    /// Estado do teste
    int status;

    /// Declarações de métodos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Definições de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};
/// @brief Declaracao de classe de teste de unidade do domínio Cidade
// Classe Name criado por Thiago Yuiti 202042702
class UTCity{
private:
    /// Definições de constantes para evitar números mágicos.

    const string VALID_VALUE = "Hong Kong";
    const string INVALID_VALUE = "Brasilia";

    /// Referência ao objeto a ser testado
    City *city;

    /// Estado do teste
    int status;

    /// Declarações de métodos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Definições de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};
/// @brief Declaracao de classe de teste de unidade do domínio Pais
// Classe Name criado por Thiago Yuiti 202042702
class UTCountry{
private:
    /// Definições de constantes para evitar números mágicos.

    const string VALID_VALUE = "Brasil";
    const string INVALID_VALUE = "Espanha";

    /// Referência ao objeto a ser testado
    Country *country;

    /// Estado do teste
    int status;

    /// Declarações de métodos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Definições de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};
#endif

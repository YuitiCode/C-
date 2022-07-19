#ifndef TESTESDOMINIOS_HPP_INCLUDED
#define TESTESDOMINIOS_HPP_INCLUDED

#include <iostream>
#include <string.h>

#include "Command.hpp"

using namespace std;

/// @brief Declaracao de classe de teste de unidade do dom�nio Nome
// Classe Name criado por Thiago Yuiti 202042702
class UTName {
private:

    /// Defini��es de constantes para evitar n�meros m�gicos.

    const string VALID_VALUE = "Pedro Jose.";
    const string INVALID_VALUE = "Pedro.jose";

    /// Refer�ncia ao objeto a ser testado
    Name *name;

    /// Estado do teste
    int status;

    /// Declara��es de m�todos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Defini��es de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do dom�nio Email
// Classe Name criado por Thiago Yuiti 202042702
class UTEmail{
private:

    /// Defini��es de constantes para evitar n�meros m�gicos.

    const string VALID_VALUE = "Pedro.jose@away.com.br";
    const string INVALID_VALUE = "pedro@jose@gmail.com";

    /// Refer�ncia ao objeto a ser testado
    Email *email;

    /// Estado do teste
    int status;

    /// Declara��es de m�todos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

/// Defini��es de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do dom�nio Senha
// Classe Name criado por Thiago Yuiti 202042702
class UTPassword{
private:

    /// Defini��es de constantes para evitar n�meros m�gicos.

    const string VALID_VALUE = "Am&43";
    const string INVALID_VALUE = "Abc12";

    /// Refer�ncia ao objeto a ser testado
    Password *password;

    /// Estado do teste
    int status;

    /// Declara��es de m�todos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Defini��es de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do dom�nio Idioma
// Classe Name criado por Thiago Yuiti 202042702
class UTLanguage{
private:
    /// Defini��es de constantes para evitar n�meros m�gicos.

    const string VALID_VALUE = "Chines Mandarim";
    const string INVALID_VALUE = "Japones";

    /// Refer�ncia ao objeto a ser testado
    Language *language;

    /// Estado do teste
    int status;

    /// Declara��es de m�todos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Defini��es de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};


/// @brief Declaracao de classe de teste de unidade do dom�nio Codigo
// Classe Name criado por Thiago Yuiti 202042702
class UTCode{
private:

    /// Defini��es de constantes para evitar n�meros m�gicos.

    const string VALID_VALUE = "6234561";
    const string INVALID_VALUE = "1234568";

    /// Refer�ncia ao objeto a ser testado
    Code *code;

    /// Estado do teste
    int status;

    /// Declara��es de m�todos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Defini��es de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};
/// @brief Declaracao de classe de teste de unidade do dom�nio Data
// Classe Name criado por Thiago Yuiti 202042702
class UTDate{
private:
    /// Defini��es de constantes para evitar n�meros m�gicos.

    const string VALID_VALUE = "29/Fev";
    const string INVALID_VALUE = "29/Fev/98";

    /// Refer�ncia ao objeto a ser testado
    Date *date;

    /// Estado do teste
    int status;

    /// Declara��es de m�todos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Defini��es de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};
/// @brief Declaracao de classe de teste de unidade do dom�nio Descricao
// Classe Name criado por Thiago Yuiti 202042702
class UTDescription{
private:

    /// Defini��es de constantes para evitar n�meros m�gicos.

    const string VALID_VALUE = "Teste de unidade de descricao para TP1.";
    const string INVALID_VALUE = "Teste de unidade de descricao para  TP1.";

    /// Refer�ncia ao objeto a ser testado
    Description *description;

    /// Estado do teste
    int status;

    /// Declara��es de m�todos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Defini��es de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Declaracao de classe de teste de unidade do dom�nio Nota
// Classe Name criado por Thiago Yuiti 202042702
class UTNote{
private:

    /// Defini��es de constantes para evitar n�meros m�gicos.

    const int VALID_VALUE = 5;
    const int INVALID_VALUE = 11;

    /// Refer�ncia ao objeto a ser testado
    Note *note;

    /// Estado do teste
    int status;

    /// Declara��es de m�todos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Defini��es de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};
/// @brief Declaracao de classe de teste de unidade do dom�nio Cidade
// Classe Name criado por Thiago Yuiti 202042702
class UTCity{
private:
    /// Defini��es de constantes para evitar n�meros m�gicos.

    const string VALID_VALUE = "Hong Kong";
    const string INVALID_VALUE = "Brasilia";

    /// Refer�ncia ao objeto a ser testado
    City *city;

    /// Estado do teste
    int status;

    /// Declara��es de m�todos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Defini��es de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};
/// @brief Declaracao de classe de teste de unidade do dom�nio Pais
// Classe Name criado por Thiago Yuiti 202042702
class UTCountry{
private:
    /// Defini��es de constantes para evitar n�meros m�gicos.

    const string VALID_VALUE = "Brasil";
    const string INVALID_VALUE = "Espanha";

    /// Refer�ncia ao objeto a ser testado
    Country *country;

    /// Estado do teste
    int status;

    /// Declara��es de m�todos para o teste

    void setUp();
    void tearDown();
    void TestSuccessfulScene();
    void TestCrashScene();

public:

    /// Defini��es de constantes para mostrar o resultado do teste

    const static int SUCCESS =  0;
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};
#endif

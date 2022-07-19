#ifndef TESTESENTIDADES_HPP_INCLUDED
#define TESTESENTIDADES_HPP_INCLUDED

#include "Entities.hpp"

#include <iostream>
#include <string.h>

using namespace std;

/// @brief Teste de unidade da classe Usuario
// Classe Name criado por Thiago Yuiti 202042702
class UTUser {
private:

    /// Valor valido de nome para o teste da entidade
    const string VALID_VALUE_NAME  = "Pedro Jose";
    /// Valor valido de email para o teste da entidade
    const string VALID_VALUE_EMAIL  = "pedro.jose@gmail.com";
    /// Valor valido de senha para o teste da entidade
    const string VALID_VALUE_PASSWORD  = "AbC13";
    /// Valor valido de idioma para o teste da entidade
    const string VALID_VALUE_LANGUAGE  = "Ingles";
    /// Valor valido de data para o teste da entidade
    const string VALID_VALUE_DATE  = "23/DEZ";
    /// Valor valido de descricao para o teste da entidade
    const string VALID_VALUE_DESCRIPTION  = "Teste de descricao.";

    /// Referencia para o objeto a ser testado
    User *user;

    /// Estado do teste
    int status;

    /// Metodo para criar a entidade a ser testada
    void setUp();

    /// Metodo para deletar a entidade criada
    void tearDown();

    /// Metodo que efetua teste dos casos validos
    void TestSuccessfulScene();
public:

    /// Constante que mostra o resultado de sucesso do teste
    const static int SUCCESS =  0;
    /// Constante que mostra o resultado de falha do teste
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};
/// @brief Teste de unidade da classe Avaliacao
// Classe Name criado por Thiago Yuiti 202042702
class UTAssessment {
private:

    /// Valor valido de codigo para o teste da entidade
    const string VALID_VALUE_CODE  = "6245161";
    /// Valor valido de nota para o teste da entidade
    static const int VALID_VALUE_NOTE  = 1;
    /// Valor valido de descricao para o teste da entidade
    const string VALID_VALUE_DESCRIPTION  = "Exemplo para entidade.";

    /// Referencia para o objeto a ser testado
    Assessment *assessment;

    /// Estado do teste
    int status;

    /// Metodo para criar a entidade a ser testada
    void setUp();
    /// Metodo para deletar a entidade criada
    void tearDown();
    /// Metodo que efetua teste dos casos validos
    void TestSuccessfulScene();
public:

    /// Constante que mostra o resultado de sucesso do teste
    const static int SUCCESS =  0;
    /// Constante que mostra o resultado de falha do teste
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};

/// @brief Teste de unidade da classe hospedagem
// Classe Name criado por Thiago Yuiti 202042702
class UTAccommodations {
private:
    /// Valor valido de codigo para o teste da entidade
    const string VALID_VALUE_CODE  = "9105131";
    /// Valor valido de cidade para o teste da entidade
    const string VALOR_VALIDO_CITY  = "Nova Iorque";
    /// Valor valido de cidade para o teste da entidade
    const string VALOR_VALIDO_COUNTRY  = "Brasil";
    /// Valor valido de nota para o teste da entidade
    static const int VALID_VALUE_NOTE = 5;
    /// Valor valido de descricao para o teste da entidade
    const string VALID_VALUE_DESCRIPTION  = "Teste de descricao.";

    /// Referencia para o objeto a ser testado
    Accommodations *accommodations;

    /// Estado do teste
    int status;

    /// Metodo para criar a entidade a ser testada
    void setUp();
    /// Metodo para deletar a entidade criada
    void tearDown();
    /// Metodo que efetua teste dos casos validos
    void TestSuccessfulScene();
public:

    /// Constante que mostra o resultado de sucesso do teste
    const static int SUCCESS =  0;
    /// Constante que mostra o resultado de falha do teste
    const static int CRASH   = -1;

    /// Metodo que executa o teste
    int run();
};

#endif

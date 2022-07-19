#include <iostream>

#include "Command.hpp"
#include "Entities.hpp"
#include "CTest.hpp"
#include "ETest.hpp"

using namespace std;

int main(){


    // Declaracao de classes para testes de dominios

    UTCity testCity;
    UTCode testCode;
    UTDate testDate;
    UTDescription testDescription;
    UTEmail testEmail;
    UTLanguage testLanguage;
    UTName testName;
    UTNote testNote;
    UTPassword testPassword;
    UTCountry testCountry;


    // Declaracao de classes para testes de entidades

    UTAssessment testAssessment;
    UTAccommodations testAccommodations;
    UTUser testUser;

    cout << "------------------------------" << endl;
    cout << "|          COMMAND          |" << endl;
    cout << "------------------------------" << endl;

    // Teste do dominio Cidade
    switch(testCity.run()){
        case UTCity::SUCCESS: cout << "SUCCESS - City" << endl;
                                break;
        case UTCity::CRASH  : cout << "CRASH   - City" << endl;
                                break;
    }
    // Teste do dominio Codigo
    switch(testCode.run()){
        case UTCode::SUCCESS: cout << "SUCCESS - Code" << endl;
                                break;
        case UTCode::CRASH  : cout << "CRASH   - Code" << endl;
                                break;
    }
    // Teste do dominio Data
    switch(testDate.run()){
        case UTDate::SUCCESS: cout << "SUCCESS - Date" << endl;
                                break;
        case UTDate::CRASH  : cout << "CRASH   - Date" << endl;
                                break;
    }
    // Teste do dominio Descricao
    switch(testDescription.run()){
        case UTDescription::SUCCESS: cout << "SUCCESS - Description" << endl;
                                break;
        case UTDescription::CRASH  : cout << "CRASH   - Description" << endl;
                                break;
    }
    // Teste do dominio Email
    switch(testEmail.run()){
        case UTEmail::SUCCESS: cout << "SUCCESS - Email" << endl;
                                break;
        case UTEmail::CRASH  : cout << "CRASH   - Email" << endl;
                                break;
    }
    // Teste do dominio Idioma
    switch(testLanguage.run()){
        case UTLanguage::SUCCESS: cout << "SUCCESS - Language" << endl;
                                break;
        case UTLanguage::CRASH  : cout << "CRASH   - Language" << endl;
                                break;
    }
    // Teste do dominio Nome
    switch(testName.run()){
        case UTName::SUCCESS: cout << "SUCCESS - Name" << endl;
                                break;
        case UTName::CRASH  : cout << "CRASH   - Name" << endl;
                                break;
    }
    // Teste do dominio Nota
    switch(testNote.run()){
        case UTNote::SUCCESS: cout << "SUCCESS - Note" << endl;
                                break;
        case UTNote::CRASH  : cout << "CRASH   - Note" << endl;
                                break;
    }
    // Teste do dominio Senha
    switch(testPassword.run()){
        case UTPassword::SUCCESS: cout << "SUCCESS - Password" << endl;
                                break;
        case UTPassword::CRASH  : cout << "CRASH   - Password" << endl;
                                break;
    }
    // Teste do dominio Pais
    switch(testCountry.run()){
        case UTCountry::SUCCESS: cout << "SUCCESS - Country" << endl;
                                break;
        case UTCountry::CRASH  : cout << "CRASH   - Country" << endl;
                                break;
    }

    cout << endl;
    cout << "------------------------------" << endl;
    cout << "|         ENTITIES          |" << endl;
    cout << "------------------------------" << endl;

    // Teste da entidade Avaliacao
    switch(testAssessment.run()){
        case UTAssessment::SUCCESS: cout << "SUCCESS - Assessment" << endl;
                                break;
        case UTAssessment::CRASH  : cout << "CRASH   - Assessment" << endl;
                                break;
    }

    // Teste da entidade Excursao
    switch(testAccommodations.run()){
        case UTAccommodations::SUCCESS: cout << "SUCCESS - Accommodations" << endl;
                                break;
        case UTAccommodations::CRASH  : cout << "CRASH   - Accommodations" << endl;
                                break;
    }
    // Teste da entidade Usuario
    switch(testUser.run()){
        case UTUser::SUCCESS: cout << "SUCCESS - User" << endl;
                                break;
        case UTUser::CRASH  : cout << "CRASH   - User" << endl;
                                break;
    }

    return 0;
}

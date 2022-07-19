#include "CTest.hpp"

#include <iostream>
#include <string.h>

using namespace std;

// Definicoes de metodos de teste de unidade do dominio None

void UTName::setUp(){
    name = new Name();
    status = SUCCESS;
}

void UTName::tearDown(){
    delete name;
}

void UTName::TestSuccessfulScene(){
    try{
        name->setValue(VALID_VALUE);
        if (name->getValue() != VALID_VALUE)
            status = CRASH;
    }
    catch(invalid_argument &excecao){
        status = CRASH;
    }
}

void UTName::TestCrashScene(){
    try{
        name->setValue(INVALID_VALUE);
        status = CRASH;
    }
    catch(invalid_argument &excecao){
        if (name->getValue() == INVALID_VALUE)
            status = CRASH;
    }
}

int UTName::run(){
    setUp();
    TestSuccessfulScene();
    TestCrashScene();
    tearDown();
    return status;
}

// Definicoes de metodos de teste de unidade do dominio Email

void UTEmail::setUp(){
    email = new Email();
    status = SUCCESS;
}

void UTEmail::tearDown(){
    delete email;
}

void UTEmail::TestSuccessfulScene(){
    try{
        email->setValue(VALID_VALUE);
        if (email->getValue() != VALID_VALUE)
            status = CRASH;
    }
    catch(invalid_argument &excecao){
        status = CRASH;
    }
}

void UTEmail::TestCrashScene(){
    try{
        email->setValue(INVALID_VALUE);
        status = CRASH;
    }
    catch(invalid_argument &excecao){
        if (email->getValue() == INVALID_VALUE)
            status = CRASH;
    }
}

int UTEmail::run(){
    setUp();
    TestSuccessfulScene();
    TestCrashScene();
    tearDown();
    return status;
}

// Definicoes de metodos de teste de unidade do dominio Senha

void UTPassword::setUp(){
    password = new Password();
    status = SUCCESS;
}

void UTPassword::tearDown(){
    delete password;
}

void UTPassword::TestSuccessfulScene(){
    try{
        password->setValue(VALID_VALUE);
        if (password->getValue() != VALID_VALUE)
            status = CRASH;
    }
    catch(invalid_argument &excecao){
        status = CRASH;
    }
}

void UTPassword::TestCrashScene(){
    try{
        password->setValue(INVALID_VALUE);
        status = CRASH;
    }
    catch(invalid_argument &excecao){
        if (password->getValue() == INVALID_VALUE)
            status = CRASH;
    }
}

int UTPassword::run(){
    setUp();
    TestSuccessfulScene();
    TestCrashScene();
    tearDown();
    return status;
}

// Definicoes de metodos de teste de unidade do dominio Codigo

void UTCode::setUp(){
    code = new Code();
    status = SUCCESS;
}

void UTCode::tearDown(){
    delete code;
}

void UTCode::TestSuccessfulScene(){
    try{
        code->setValue(VALID_VALUE);
        if (code->getValue() != VALID_VALUE)
            status = CRASH;
    }
    catch(invalid_argument &excecao){
        status = CRASH;
    }
}

void UTCode::TestCrashScene(){
    try{
        code->setValue(INVALID_VALUE);
        status = CRASH;
    }
    catch(invalid_argument &excecao){
        if (code->getValue() == INVALID_VALUE)
            status = CRASH;
    }
}

int UTCode::run(){
    setUp();
    TestSuccessfulScene();
    TestCrashScene();
    tearDown();
    return status;
}

// Definicoes de metodos de teste de unidade do dominio Nota

void UTNote::setUp(){
    note = new Note();
    status = SUCCESS;
}

void UTNote::tearDown(){
    delete note;
}

void UTNote::TestSuccessfulScene(){
    try{
        note->setValue(VALID_VALUE);
        if (note->getValue() != VALID_VALUE)
            status = CRASH;
    }
    catch(invalid_argument &excecao){
        status = CRASH;
    }
}

void UTNote::TestCrashScene(){
    try{
        note->setValue(INVALID_VALUE);
        status = CRASH;
    }
    catch(invalid_argument &excecao){
        if (note->getValue() == INVALID_VALUE)
            status = CRASH;
    }
}

int UTNote::run(){
    setUp();
    TestSuccessfulScene();
    TestCrashScene();
    tearDown();
    return status;
}

// Definicoes de metodos de teste de unidade do dominio Descricao

void UTDescription::setUp(){
    description = new Description();
    status = SUCCESS;
}

void UTDescription::tearDown(){
    delete description;
}

void UTDescription::TestSuccessfulScene(){
    try{
        description->setValue(VALID_VALUE);
        if (description->getValue() != VALID_VALUE)
            status = CRASH;
    }
    catch(invalid_argument &excecao){
        status = CRASH;
    }
}

void UTDescription::TestCrashScene(){
    try{
        description->setValue(INVALID_VALUE);
        status = CRASH;
    }
    catch(invalid_argument &excecao){
        if (description->getValue() == INVALID_VALUE)
            status = CRASH;
    }
}

int UTDescription::run(){
    setUp();
    TestSuccessfulScene();
    TestCrashScene();
    tearDown();
    return status;
}


// Definicoes de metodos de teste de unidade do dominio Cidade

void UTCity::setUp(){
    city = new City();
    status = SUCCESS;
}

void UTCity::tearDown(){
    delete city;
}

void UTCity::TestSuccessfulScene(){
    try{
        city->setValue(VALID_VALUE);
        if (city->getValue() != VALID_VALUE)
            status = CRASH;
    }
    catch(invalid_argument &excecao){
        status = CRASH;
    }
}

void UTCity::TestCrashScene(){
    try{
        city->setValue(INVALID_VALUE);
        status = CRASH;
    }
    catch(invalid_argument &excecao){
        if (city->getValue() == INVALID_VALUE)
            status = CRASH;
    }
}

int UTCity::run(){
    setUp();
    TestSuccessfulScene();
    TestCrashScene();
    tearDown();
    return status;
}

// Definicoes de metodos de teste de unidade do dominio Data

void UTDate::setUp(){
    date = new Date();
    status = SUCCESS;
}

void UTDate::tearDown(){
    delete date;
}

void UTDate::TestSuccessfulScene(){
    try{
        date->setValue(VALID_VALUE);
        if (date->getValue() != VALID_VALUE)
            status = CRASH;
    }
    catch(invalid_argument &excecao){
        status = CRASH;
    }
}

void UTDate::TestCrashScene(){
    try{
        date->setValue(INVALID_VALUE);
        status = CRASH;
    }
    catch(invalid_argument &excecao){
        if (date->getValue() == INVALID_VALUE)
            status = CRASH;
    }
}

int UTDate::run(){
    setUp();
    TestSuccessfulScene();
    TestCrashScene();
    tearDown();
    return status;
}
// Definicoes de metodos de teste de unidade do dominio Idioma

void UTLanguage::setUp(){
    language = new Language();
    status = SUCCESS;
}

void UTLanguage::tearDown(){
    delete language;
}

void UTLanguage::TestSuccessfulScene(){
    try{
        language->setValue(VALID_VALUE);
        if (language->getValue() != VALID_VALUE)
            status = CRASH;
    }
    catch(invalid_argument &excecao){
        status = CRASH;
    }
}

void UTLanguage::TestCrashScene(){
    try{
        language->setValue(INVALID_VALUE);
        status = CRASH;
    }
    catch(invalid_argument &excecao){
        if (language->getValue() == INVALID_VALUE)
            status = CRASH;
    }
}

int UTLanguage::run(){
    setUp();
    TestSuccessfulScene();
    TestCrashScene();
    tearDown();
    return status;
}
// Definicoes de metodos de teste de unidade do dominio PAIS

void UTCountry::setUp(){
    country = new Country();
    status = SUCCESS;
}

void UTCountry::tearDown(){
    delete country;
}

void UTCountry::TestSuccessfulScene(){
    try{
        country->setValue(VALID_VALUE);
        if (country->getValue() != VALID_VALUE)
            status = CRASH;
    }
    catch(invalid_argument &excecao){
        status = CRASH;
    }
}

void UTCountry::TestCrashScene(){
    try{
        country->setValue(INVALID_VALUE);
        status = CRASH;
    }
    catch(invalid_argument &excecao){
        if (country->getValue() == INVALID_VALUE)
            status = CRASH;
    }
}

int UTCountry::run(){
    setUp();
    TestSuccessfulScene();
    TestCrashScene();
    tearDown();
    return status;
}

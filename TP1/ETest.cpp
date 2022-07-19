#include "ETest.hpp"
#include <iostream>
#include <string.h>

using namespace std;

// Criancao dos metodos para testes de entidade Usuario

void UTUser::setUp(){
    user = new User();
    status = SUCCESS;
}

void UTUser::tearDown(){
    delete user;
}

void UTUser::TestSuccessfulScene(){
    Name name;
    name.setValue(VALID_VALUE_NAME);
    user->setName(name);
    if(user->getName().getValue() != VALID_VALUE_NAME)
        status = CRASH;

    Email email;
    email.setValue(VALID_VALUE_EMAIL);
    user->setEmail(email);
    if(user->getEmail().getValue() != VALID_VALUE_EMAIL)
        status = CRASH;

    Password password;
    password.setValue(VALID_VALUE_PASSWORD);
    user->setPassword(password);
    if(user->getPassword().getValue() != VALID_VALUE_PASSWORD)
        status = CRASH;

    Language language;
    language.setValue(VALID_VALUE_LANGUAGE);
    user->setLanguage(language);
    if(user->getLanguage().getValue() != VALID_VALUE_LANGUAGE)
        status = CRASH;

    Date date;
    date.setValue(VALID_VALUE_DATE);
    user->setDate(date);
    if(user->getDate().getValue() != VALID_VALUE_DATE)
        status = CRASH;

    Description description;
    description.setValue(VALID_VALUE_DESCRIPTION);
    user->setDescription(description);
    if(user->getDescription().getValue() != VALID_VALUE_DESCRIPTION)
        status = CRASH;
}

int UTUser::run(){
    setUp();
    TestSuccessfulScene();
    tearDown();
    return status;
}

// Criacoa dos metodos para testes da entidade Avaliacao

void UTAssessment::setUp(){
    assessment = new Assessment();
    status = SUCCESS;
}

void UTAssessment::tearDown(){
    delete assessment;
}

void UTAssessment::TestSuccessfulScene(){
    Code code;
    code.setValue(VALID_VALUE_CODE);
    assessment->setCode(code);
    if(assessment->getCode().getValue() != VALID_VALUE_CODE)
        status = CRASH;

    Note note;
    note.setValue(VALID_VALUE_NOTE);
    assessment->setNote(note);
    if(assessment->getNote().getValue() != VALID_VALUE_NOTE)
        status = CRASH;

    Description description;
    description.setValue(VALID_VALUE_DESCRIPTION);
    assessment->setDescription(description);
    if(assessment->getDescription().getValue() != VALID_VALUE_DESCRIPTION)
        status = CRASH;
}

int UTAssessment::run(){
    setUp();
    TestSuccessfulScene();
    tearDown();
    return status;
}

// Criacoa dos metodos para testes da entidade Hospedagem

void UTAccommodations::setUp(){
    accommodations = new Accommodations();
    status = SUCCESS;
}

void UTAccommodations::tearDown(){
    delete accommodations;
}

void UTAccommodations::TestSuccessfulScene(){
    Code code;
    code.setValue(VALID_VALUE_CODE);
    accommodations->setCode(code);
    if(accommodations->getCode().getValue() != VALID_VALUE_CODE)
        status = CRASH;

    City city;
    city.setValue(VALOR_VALIDO_CITY);
    accommodations->setCity(city);
    if(accommodations->getCity().getValue() != VALOR_VALIDO_CITY)
        status = CRASH;

    Country country;
    country.setValue(VALOR_VALIDO_COUNTRY);
    accommodations->setCountry(country);
    if(accommodations->getCountry().getValue() != VALOR_VALIDO_COUNTRY)
        status = CRASH;

    Note note;
    note.setValue(VALID_VALUE_NOTE);
    accommodations->setNote(note);
    if(accommodations->getNote().getValue() != VALID_VALUE_NOTE)
        status = CRASH;

    Description description;
    description.setValue(VALID_VALUE_DESCRIPTION);
    accommodations->setDescription(description);
    if(accommodations->getDescription().getValue() != VALID_VALUE_DESCRIPTION)
        status = CRASH;

}
int UTAccommodations::run(){
    setUp();
    TestSuccessfulScene();
    tearDown();
    return status;
}

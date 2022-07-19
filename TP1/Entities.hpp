#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include <iostream>
#include "Command.hpp"
#include <stdexcept>
#include <string.h>

using namespace std;

/// @brief Representacao de usuario
///
/// Usuario contem entidades Nome, Email, Senha, Idioma, Data, Descricao.
// Classe User criado por Pedro Jose 190139315

class User{
private:
    Name name;
    Email email;
    Password password;
    Language language;
    Date date;
    Description description;
public:
    /// - Armazena o nome do Usuario caso seja valido
    /// - Caso o nome seja invalido lanca a excecao
    /// - @param Nome nome
    /// - @throw invalid argument
    void setName(const Name &name);
    ///
    /// - Retorna o nome
    /// - @return nome
    ///
    Name getName() const;
    ///
    /// - Armazena o email do Usuario caso seja valido
    /// - Caso o nome seja invalido eh lancada execao
    /// - @param Email email
    /// - @throw invalid argument
    ///
    void setEmail(const Email &email);
    ///
    /// - Retorna o email
    /// - @return email
    ///
    Email getEmail() const;
    ///
    /// - Armazena a senha do Usuario caso seja valido
    /// - Caso a senha seja invalido eh lancada execao
    /// - @param Senha email
    /// - @throw invalid argument
    ///
    void setPassword(const Password &password);
    ///
    /// - Retorna a senha
    /// - @return senha
    ///
    Password getPassword() const;
    ///
    /// - Armazena o idioma do Usuario caso seja valido
    /// - Caso o idioma seja invalido lanca a excecao
    /// - @param Language language
    /// - @throw invalid argument
    ///
    void setLanguage(const Language &language);
    ///
    /// - Retorna o language
    /// - @return language
    ///
    Language getLanguage() const;
    ///
    /// - Armazena o aniversario do Usuario caso seja valido
    /// - Caso o aniversario seja invalido lanca a excecao
    /// - @param Nome nome
    /// - @throw invalid argument
    ///
    void setDate(const Date &date);
    ///
    /// - Retorna a data
    /// - @return data
    ///
    Date getDate() const;
    ///
    /// - Armazena a descricao do Usuario caso seja valido
    /// - Caso o nome seja invalido lanca a excecao
    /// - @param Nome nome
    /// - @throw invalid argument
    ///
    void setDescription(const Description &description);
    ///
    /// - Retorna a descricao
    /// - @return descricao
    ///
    Description getDescription() const;

;
};

inline void User::setName(const Name &name){
    this -> name = name;
}
inline Name User::getName() const {
    return name;
}

inline void User::setEmail(const Email &email){
    this -> email = email;
}
inline Email User::getEmail() const {
    return email;
}
inline void User::setPassword(const Password &password){
    this -> password = password;
}
inline Password User::getPassword() const {
    return password;
}
inline void User::setLanguage(const Language &language){
    this -> language = language;
}
inline Language User::getLanguage() const {
    return language;
}
inline void User::setDate(const Date &date){
    this -> date = date;
}
inline Date User::getDate() const {
    return date;
}
inline void User::setDescription(const Description &description){
    this -> description = description;
}
inline Description User::getDescription() const {
    return description;
}
/// @brief Representacao de avaliacao
///
/// - Avaliacao contem codigo, nota e descricao
// Classe Assessment criado por Pedro Jose 190139315

class Assessment{
private:
    Code code;
    Note note;
    Description description;
public:
    ///
    /// - Armazena o codigo da Avaliacao caso seja valido
    /// - Caso o nome seja invalido eh lancada excecao
    /// - @param Codigo codigo
    /// - @throw invalid argument
    ///
    void setCode(const Code &code);
    ///
    /// - Retorna o codigo
    /// - @return codigo
    ///
    Code getCode() const;
    ///
    /// - Armazena a nota da Avaliacao caso seja valido
    /// - Caso o seja invalido eh lancada excecao
    /// - @param Nota nota
    /// - @throw invalid argument
    ///
    void setNote(const Note &note);
    ///
    /// - Retorna a nota
    /// - @return nota
    ///
    Note getNote() const;
    ///
    /// - Armazena a descricao da avaliacao caso seja valido
    /// - Caso a descricao seja invalida eh lancada excecao
    /// - @param Descricao descricao
    /// - @throw invalid argument
    ///
    void setDescription(const Description &description);
    ///
    /// - Retorna a descriacao
    /// - @return descricao
    ///
    Description getDescription() const;

};

inline void Assessment::setCode(const Code &code){
    this -> code = code;
}
inline Code Assessment::getCode() const {
    return code;
}

inline void Assessment::setNote(const Note &note){
    this -> note = note;
}

inline Note Assessment::getNote() const {
    return note;
}

inline void Assessment::setDescription(const Description &description){
    this -> description = description;
}
inline Description Assessment::getDescription() const {
    return description;
}

/// @brief Representacao de hospedagem
///
/// Excursao contem codigo, cidade, pais, nota e descricao
// Classe Assessment criado por Pedro Jose 190139315
class Accommodations{
private:
    Code code;
    City city;
    Country country;
    Note note;
    Description description;

public:
    ///
    /// - Armazena o codigo da hospedagem caso seja valido
    ///
    /// - Caso o codigo seja invalido eh lancada excecao
    ///
    /// - @param Codigo codigo
    ///
    /// - @throw invalid argument
    ///
    void setCode(const Code &code);
    ///
    /// - Retorna o codigo
    ///
    /// - @return codigo
    ///
    Code getCode() const;
    ///
    /// - Armazena a cidade da hospedagem caso seja valido
    ///
    /// - Caso a cidade seja invalida eh lancada excecao
    ///
    /// - @param Cidade cidade
    ///
    /// - @throw invalid argument
    ///
    void setCity(const City &city);
    ///
    /// - Retorna cidade
    ///
    /// - @return cidade
    ///
    City getCity() const;
    ///
    /// - Armazena o pais da hospedagem caso seja valido
    ///
    /// - Caso o endereco seja invalido eh lancada excecao
    ///
    /// - @param Country country
    ///
    /// - @throw invalid argument
    ///
    void setCountry(const Country &country);
    ///
    /// - Retorna o pais
    ///
    /// - @return pais
    ///
    Country getCountry() const;
    ///
    /// - Armazena a nota da hospedagem caso seja valido
    ///
    /// - Caso a nota seja invalida eh lancada excecao
    ///
    /// - @param Nota nota
    ///
    /// - @throw invalid argument
    ///
    void setNote(const Note &note);
    ///
    /// - Retorna a nota
    ///
    /// - @return nota
    ///
    Note getNote() const;
    ///
    /// - Armazena a descricao da hospedagem caso seja valido
    ///
    /// - Caso a descricao seja invalida eh lancada excecao
    ///
    /// - @param Descricao descricao
    ///
    /// - @throw invalid argument
    ///
    void setDescription(const Description &description);
    ///
    /// - Retorna descricao
    ///
    /// - @return descricao
    ///
    Description getDescription() const;
};
inline void Accommodations::setCode(const Code &code){
    this -> code = code;
}
inline Code Accommodations::getCode() const {
    return code;
}

inline void Accommodations::setCity(const City &city){
    this -> city = city;
}
inline City Accommodations::getCity() const {
    return city;
}

inline void Accommodations::setCountry(const Country &country){
    this -> country = country;
}
inline Country Accommodations::getCountry() const {
    return country;
}
inline void Accommodations::setNote(const Note &note){
    this -> note = note;
}
inline Note Accommodations::getNote() const {
    return note;
}
inline void Accommodations::setDescription(const Description &description){
    this -> description = description;
}
inline Description Accommodations::getDescription() const {
    return description;
}
#endif

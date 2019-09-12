//
// Created by user on 2019/9/2.
//

// .cpp file for defining

#include "ClubMember.h"

#include <utility>

void ClubMember::void_assignName(std::string str_input) {
    _str_name = str_input;
}

void ClubMember::void_assignNickname(std::string str_input) {
    _str_nickname = str_input;
}

void ClubMember::void_assignGender(bool bool_input) {
    _bool_Gender = bool_input;
}

void ClubMember::void_assignClass(std::string str_input) {
    _str_class = str_input;
}

std::string ClubMember::str_returnName() {
    return _str_name;
}

std::string ClubMember::str_returnNickname() {
    return _str_nickname;
}

bool ClubMember::str_returnGender() {
    return _bool_Gender;
}

std::string ClubMember::str_returnClass() {
    return _str_class;
}
//
// Created by user on 2019/9/2.
//

#ifndef SHOWINGOFF_CLUBMEMBER_H
#define SHOWINGOFF_CLUBMEMBER_H

#include <string>

// .h flies for assignment
class ClubMember {
private:
   std:: string _str_name;
   std::string _str_nickname;
   bool  _bool_Gender;
   std::string _str_class;
public:
    void void_assignName (std::string str_input);
    void void_assignNickname (std::string str_input);
    void void_assignGender (bool  bool_input);
    void void_assignClass (std::string str_input);
//assignment

 std::string str_returnName ();
 std::string str_returnNickname ();
 bool str_returnGender ();
 std::string str_returnClass ();
};


#endif //SHOWINGOFF_CLUBMEMBER_H

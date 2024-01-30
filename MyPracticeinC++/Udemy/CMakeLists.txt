cmake_minimum_required(VERSION 3.27)
project(Udemy)

set(CMAKE_CXX_STANDARD 14)

include_directories(BankApplication/include)
include_directories(MyString/include)
include_directories(OOPMovieChallenge/include)
include_directories(Polymorphism)
include_directories(Polymorphism/include)

add_executable(Udemy
        AskingUserForFavNum/main.cpp
        AskInputFromUser/main.cpp
        BankApplication/include/Account.h
        BankApplication/include/Account_Util.cpp
        BankApplication/include/Account_Util.h
        BankApplication/include/Savings_Account.h
        BankApplication/src/Account.cpp
        BankApplication/src/Savings_Account.cpp
        BankApplication/main.cpp
        CaesarCipher/main.cpp
        DeepCopy/main.cpp
        FunctionInC++/main.cpp
        MenuApplication/main.cpp
        MoveConst/main.cpp
        MyString/include/MyString.h
        MyString/src/MyString.cpp
        MyString/main.cpp
        OOPMovieChallenge/include/Movie.h
        OOPMovieChallenge/include/Movies.h
        OOPMovieChallenge/src/Movie.cpp
        OOPMovieChallenge/src/Movies.cpp
        OOPMovieChallenge/main.cpp
        PointersChallenge/main.cpp
        Polymorphism/include/Account.h
        Polymorphism/include/Checking_Account.h
        Polymorphism/include/Savings_Account.h
        Polymorphism/include/Trust_Account.h
        Polymorphism/src/Account.cpp
        Polymorphism/src/Checking_Account.cpp
        Polymorphism/src/Savings_Account.cpp
        Polymorphism/src/Trust_Account.cpp
        Polymorphism/Account_Util.cpp
        Polymorphism/Account_Util.h
        Polymorphism/main.cpp
        RoomCleaningProblem/main.cpp
        RupeesProblem/main.cpp
        SimplePointers/main.cpp
        StaticClassMembers/main.cpp
        SubstitutionCipher/main.cpp
        SwapingUsingPointers/main.cpp
        SwapTwovaluesUsingPtrs/main.cpp
        TestingC++/main.cpp
        TestingVectors/main.cpp)

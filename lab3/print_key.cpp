#include <iostream>
#include <string>

using namespace std;

void help(){
    cout << "List of options:" << endl;
    cout << "--help -h" << endl;
    cout << "\tDisplays help message." << endl;
    cout << "--example -e" << endl;
    cout << "\tTurns on displaying the examples with required meanings" << endl;
    cout << "--away -A" << endl;
    cout << "\tDisplays meanings of the phrasal verb 'get away'" << endl;
    cout << "--by -B" << endl;
    cout << "\tDisplays meanings of the phrasal verb 'get by'" << endl;
    cout << "--down -D" << endl;
    cout << "\tDisplays meanings of the phrasal verb 'get down'" << endl;
    cout << "--off -O" << endl;
    cout << "\tDisplays meanings of the phrasal verb 'get off'" << endl;
    cout << "--up -U" << endl;
    cout << "\tDisplays meanings of the phrasal verb 'get up'" << endl;
}

void example(){
    cout << "(Examples are turned on)\n" << endl;
}

void away(string part, bool example_on){
    cout << "Phrasal verb 'get away' will be displayed with " << part.c_str() << " meaning(s)" << endl;
    if(part.find('1') != string::npos){
        cout << "\n1st meaning: To leave or escape from someone or something" << endl;
        if(example_on){
            cout << "\tExample: Get away from him!" << endl;
        }
    } if(part.find('2') != string::npos){
        cout << "\n2nd meaning: To go somewhere to have a rest or holiday" << endl;
        if(example_on){
            cout << "\tExample: It’ll be nice to get away! Work has been so stressful this past month." << endl;
        }
    } if(part.find('3') != string::npos){
        cout << "\n3rd meaning: A holiday, often short (noun)" << endl;
        if(example_on){
            cout << "\tExample: We enjoyed a weekend getaway in a lovely hotel in the countryside." << endl;
        }
    }
    cout << "There are no more required meanings\n" << endl;
}

void by(string part, bool example_on){
    cout << "Phrasal verb 'get by' will be displayed with " << part.c_str() << " meaning(s)" << endl;
    if(part.find('1') != string::npos){
        cout << "\n1st meaning: To manage something with difficulty, to make ends meet" << endl;
        if(example_on){
            cout << "\tExample: Some poor families manage to get by on just £10 a day." << endl;
        }
    } if(part.find('2') != string::npos){
        cout << "\n2nd meaning: To succeed with the minimum effort" << endl;
        if(example_on){
            cout << "\tExample: He hasn’t revised for his exams at all, but he’s clever enough to get by." << endl;
        }
    } if(part.find('3') != string::npos){
        cout << "\n3rd meaning: To move past something or someone" << endl;
        if(example_on){
            cout << "\tExample: Excuse me, could you please move your bag so I can get by?" << endl;
        }
    }
    cout << "There are no more required meanings\n" << endl;
}

void down(string part, bool example_on){
    cout << "Phrasal verb 'get down' will be displayed with " << part.c_str() << " meaning(s)" << endl;
    if(part.find('1') != string::npos){
        cout << "\n1st meaning: To feel depressed or unhappy" << endl;
        if(example_on){
            cout << "\tExample: The political situation at the moment is really getting me down." << endl;
        }
    } if(part.find('2') != string::npos){
        cout << "\n2nd meaning: To party, sometimes dance" << endl;
        if(example_on){
            cout << "\tExample: You guys were really getting down last night! Did you have a good time?" << endl;
        }
    } if(part.find('3') != string::npos){
        cout << "\n3rd meaning: To swallow food" << endl;
        if(example_on){
            cout << "\tExample: I know you don’t like eating vegetables, but you need to get them down." << endl;
        }
    }
    cout << "There are no more required meanings\n" << endl;
}

void off(string part, bool example_on){
    cout << "Phrasal verb 'get off' will be displayed with " << part.c_str() << " meaning(s)" << endl;
    if(part.find('1') != string::npos){
        cout << "\n1st meaning: To physically leave a mode of transport" << endl;
        if(example_on){
            cout << "\tExample: The traffic is terrible! Let’s get off at the next stop and walk." << endl;
        }
    } if(part.find('2') != string::npos){
        cout << "\n2nd meaning: To leave work, usually at the end of the day" << endl;
        if(example_on){
            cout << "\tExample: What time do you get off tonight?" << endl;
        }
    } if(part.find('3') != string::npos){
        cout << "\n3rd meaning: To avoid something more serious" << endl;
        if(example_on){
            cout << "\tExample: He got off with an automatic fine, but we thought he’d have to go to court." << endl;
        }
    }
    cout << "There are no more required meanings\n" << endl;
}

void up(string part, bool example_on){
    cout << "Phrasal verb 'get up' will be displayed with " << part.c_str() << " meaning(s)" << endl;
    if(part.find('1') != string::npos){
        cout << "\n1st meaning: To stand up" << endl;
        if(example_on){
            cout << "\tExample: We all got up to let the elderly lady past." << endl;
        }
    } if(part.find('2') != string::npos){
        cout << "\n2nd meaning: An outfit or costume (noun)" << endl;
        if(example_on){
            cout << "\tExample: He was in a farmers get-up and looked very funny!" << endl;
        }
    } if(part.find('3') != string::npos){
        cout << "\n3rd meaning: To climb or ascend" << endl;
        if(example_on){
            cout << "\tExample: We managed to get up the mountain in about 3 hours." << endl;
        }
    }
    cout << "There are no more required meaningsn\n" << endl;
}


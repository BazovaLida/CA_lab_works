#include <cstdio>
#include <getopt.h>
#include <map>
#include <string>
#include "print_key.h"

using namespace std;

int main (int argc, char *argv[]){
    bool examples_on = false;

    map<string, bool> used_flag;
    int curr_com;
    static struct option long_options[] = {
            {"help", no_argument, 0, 'h'},
            {"example", no_argument, 0, 'e'},
            {"away", required_argument, 0, 'A'},
            {"by", required_argument, 0, 'B'},
            {"down", required_argument, 0, 'D'},
            {"off", required_argument, 0, 'O'},
            {"up", required_argument, 0, 'U'},
            {0,0,0,0}
    };
    int option_index = 0;

    while((curr_com = getopt_long(argc, argv, "heA:B:D:O:U:", long_options, &option_index)) != -1){
        switch (curr_com) {
            case 'h':
                if(!used_flag["h"]){
                    printf("\n-h key found\n");
                    help();
                    used_flag["h"] = true;
                }
                break;
            case 'e':
                if (!used_flag["e"]){
                    printf("\n-e key found\n");
                    example();
                    examples_on = true;
                    used_flag["e"] = true;
                }
                break;
            case 'A':
                if (!used_flag["A"]){
                    printf("\n-A key found with arguments '%s'\n", optarg);
                    away(optarg, examples_on);
                    used_flag["A"] = true;
                }
                break;
            case 'B':
                if (!used_flag["B"]){
                    printf("\n-B key found with arguments '%s'\n", optarg);
                    by(optarg, examples_on);
                    used_flag["B"] = true;
                }
                break;
            case 'D':
                if (!used_flag["D"]){
                    printf("\n-D key found with arguments '%s'\n", optarg);
                    down(optarg, examples_on);
                    used_flag["D"] = true;
                }
                break;
            case 'O':
                if (!used_flag["O"]){
                    printf("\n-O key found with arguments '%s'\n", optarg);
                    off(optarg, examples_on);
                    used_flag["O"] = true;
                }
                break;
            case 'U':
                if (!used_flag["U"]){
                    printf("\n-U key found with arguments '%s'\n", optarg);
                    up(optarg, examples_on);
                    used_flag["U"] = true;
                }
                break;
            case '?':
                break;
            default:
                abort();
        }
        option_index = -1;
    }

    return(0);
}

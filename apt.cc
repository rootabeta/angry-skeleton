#include <iostream>
#include <csignal>
#include <unistd.h>

void signalHandler(int signum) { 
        std::cout << "What? An interrupt? Pathetic! Wait 10 more seconds!" << std::endl;
        sleep(10);
}

void print_mr_spooky_scary_skeleton() {
    std::cout << "              .7" << std::endl;
    std::cout << "            .'/" << std::endl;
    std::cout << "           / /" << std::endl;
    std::cout << "          / /" << std::endl;
    std::cout << "         / /" << std::endl;
    std::cout << "        / /" << std::endl;
    std::cout << "       / /" << std::endl;
    std::cout << "      / /" << std::endl;
    std::cout << "     / /         " << std::endl;
    std::cout << "    / /          " << std::endl;
    std::cout << "  __|/" << std::endl;
    std::cout << ",-\\__\\" << std::endl;
    std::cout << "|f-\"Y\\" << std::endl;
    std::cout << "\\()7L/" << std::endl;
    std::cout << " cgD                            __ _" << std::endl;
    std::cout << " |\\(                          .'  Y '>," << std::endl;
    std::cout << "  \\ \\                        / _   _   \\" << std::endl;
    std::cout << "   \\\\\\                       )(_) (_)(|}" << std::endl;
    std::cout << "    \\\\\\                      {  4A   } /" << std::endl;
    std::cout << "     \\\\\\                      \\uLuJJ/\\l" << std::endl;
    std::cout << "      \\\\\\                     |3    p)/" << std::endl;
    std::cout << "       \\\\\\___ __________      /nnm_n//" << std::endl;
    std::cout << "       c7___-__,__-)\\,__)(\".  \\_>-<_/D" << std::endl;
    std::cout << "                  /\\/V     \\_\"-._.__G G_c__.-__<\"/ ( \\" << std::endl;
    std::cout << "                         <\"-._>__-,G_.___)\\   \\7\\" << std::endl;
    std::cout << "                        (\"-.__.| \\\"<.__.-\" )   \\ \\" << std::endl;
    std::cout << "                        |\"-.__\"\\  |\"-.__.-\".\\   \\ \\" << std::endl;
    std::cout << "                        (\"-.__\"\". \\\"-.__.-\".|    \\_\\" << std::endl;
    std::cout << "                        \\\"-.__\"\"|!|\"-.__.-\".)     \\ \\" << std::endl;
    std::cout << "                         \"-.__\"\"\\_|\"-.__.-\"./      \\ l" << std::endl;
    std::cout << "                          \".__\"\"\">G>-.__.-\">       .--,_\\" << std::endl;
    std::cout << "                              \"\"  G" << std::endl;
    std::cout << "          NYEHEHEHE! This is Manjaro, you nincompoop!" << std::endl;
    std::cout << " There is no apt package manager, there is no stable release, " << std::endl;
    std::cout << "          and there is no Queen of England! (Anymore)" << std::endl;
}

int main() {
        signal(SIGINT, signalHandler);
        print_mr_spooky_scary_skeleton();
        std::cout << "Now stay in this prison to atone for your crimes!" << std::endl;
        std::cout << "Don't worry, we'll let you out in " << std::flush;
        for(int i = 0; i<10;i++) { 
                std::cout << 10-i << "... " << std::flush;
                sleep(1);
        }
        std::cout << "Alright, leave! And never come back!" << std::endl;
        return 0;
}

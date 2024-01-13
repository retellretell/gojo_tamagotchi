#include <iostream>
#include <string>

class Tamagotchi {
private:
    std::string name;
    int hunger;
    int happiness;

public:
    Tamagotchi(const std::string& n) : name(n), hunger(0), happiness(100) {}

    void feed() {
       std::cout << "yum yum"<<"\n";

        hunger -= 10;
        if (hunger < 0) hunger = 0;
        happiness += 5;
        if (happiness > 100) happiness = 100;
    }

    void play() {
        std::cout << name << " is playing!\n";
        hunger += 5;
        if (hunger > 100) hunger = 100;
        happiness += 10;
        if (happiness > 100) happiness = 100;
    }

    void status() {
        std::cout << "Name: " << name << "\n";
        std::cout << "Hunger: " << hunger << "\n";
        std::cout << "Happiness: " << happiness << "\n";
    }
     void satoru() {
        std::cout << "how is satoru?"<<"\n";
    }

    void feed_gojo() {
       std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠀⡀⠀⠀⠀⣠⡖⠐⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡴⠀⡸⠁⢠⠃⠀⢀⣴⠟⠀⢀⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⢠⠃⠀⣏⣀⡤⠚⠁⠤⠤⠾⠤⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣧⢸⠀⠼⠋⠁⢀⣀⣀⣀⠀⠀⠀⠀⠀⢉⡓⠶⣤⣄⣀⣀⣀⠀⠀⠀\n";
std::cout << "⠀⠀⠀⠀⠀⢀⠔⠋⠁⣠⠁⠀⠛⠋⠁⠀⠀⠀⠀⠀⠤⠤⣉⡒⠖⠤⢄⣈⠛⠛⠳⠤⢤⣤⣤⠄⠀⠀\n";
std::cout << "⠀⠀⠀⠀⡜⠁⢀⡤⠊⠀⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⢷⠄⠀⠀⠉⠑⠒⠶⣈⡉⠁⠀⠀⠀\n";
std::cout << "⣀⣀⣀⠤⠖⠊⠁⠀⠀⢸⠁⠀⢀⠀⠀⠀⠀⡄⠀⠀⢶⠀⠘⣆⠀⠳⡀⠀⡄⠀⠰⢤⣤⠬⡭⣶⡶⠶\n";
std::cout << "⠀⠀⠀⠀⠀⣠⠏⠀⠀⠈⠀⠀⢸⡄⢠⠀⠀⣧⣷⠀⢸⡀⢠⠘⣆⠀⠱⡀⢻⠾⣆⢢⡹⣆⠀⠀⠀⠀\n";
std::cout << "⠀⠀⢀⣤⡾⡟⠀⡄⠀⡆⠀⠀⠀⢧⠸⡄⠀⢻⢹⡇⢼⢷⠈⡆⢹⢣⡀⠱⣼⡳⡙⢆⠱⠙⡆⠀⠀⠀\n";
std::cout << "⠰⠶⠟⠋⢰⠃⠀⡇⠀⢹⠀⢹⡘⡜⡆⢳⡀⠸⠈⣷⢸⣾⡆⠸⠸⡄⠑⡄⢻⡇⠱⡘⣷⣧⢹⡀⠀⠀\n";
std::cout << "⠀⠀⠀⠀⡎⡸⠀⢱⠀⠈⢧⠀⢇⢷⣽⡌⢧⠀⡷⢾⡀⡇⠱⡀⠃⡷⠒⠛⣺⣷⢄⠙⣽⣏⢧⣧⠀⠀\n";
std::cout << "⠀⠀⠀⢰⣿⡷⣧⠀⢣⡀⠈⡆⠸⢸⠙⣿⣄⣱⣷⣴⣧⣇⠀⠹⣿⣇⣴⣶⣿⣿⣈⢦⠘⣞⠘⠉⠀⠀\n";
std::cout << "⠀⠀⣤⠟⣱⣷⡟⣶⡤⢷⣄⣰⣀⣿⣄⣘⣬⣿⣿⣿⣿⣿⣷⣤⣤⣿⣿⣿⣿⣿⡀⠳⣌⡇⠀⠀⠀\n";
std::cout << "⠀⠀⠀⠘⠋⣸⡷⡿⣇⡿⣶⡽⠏⠛⠉⠉⠙⢿⣿⣿⣿⣿⠏⠀⠀⠻⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀\n";
std::cout << "⠀⠀⠀⠀⢠⡟⠁⢳⣿⡦⠋⣧⡀⠀⠀⠀⠀⠀⠉⠉⠉⠁⠀⠀⠀⠀⠀⠉⠉⠀⡿⠀⠀⠀⠀⠀⠀⠀\n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣆⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡇⠀⠀⠀⠀⠀⠀⠀\n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠛⢻⠀⠑⠤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡇⠀⠀⠀⠀⠀⠀⠀\n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⣀⣸⡆⠀⠀⠈⠓⠀⠀⠀⠀⠀⠀⠀⠺⣍⢉⡟⠀⢀⣼⠟⠀⠀⠀⠀⠀⠀⠀⠀\n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣇⡀⠀⠀⠀⠐⢦⣀⠀⠀⠀⠀⠀⠈⠉⢀⣴⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣶⣤⣀⠀⠀⠹⢿                         "<<std::endl;

        hunger -= 10;
        if (hunger < 0) hunger = 0;
        happiness += 5;
        if (happiness > 100) happiness = 100;
    }

    void play_gojo() {
        std::cout << name << " is playing!\n";
        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡾⠋⠐⠦⢄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠟⠁⠀⡀⡀⠀⢀⠉⢐⣣⠠⢀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⣴⠋⢠⣲⣮⣶⠟⣻⣿⡶⢯⠁⠁⠀⠈⢑⢢⠤⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠀⠀⢀⡾⢡⠀⠉⡛⠿⢭⣴⠿⣫⣴⠋⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⣀⡢⢤⣀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠀⢀⡾⠁⠀⣀⣤⠄⠉⠀⠀⠀⠂⠀⠀⠀⠤⢺⣿⣿⣾⣷⡿⣿⠛⠁⡀⢀⡿⡆⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⣠⢏⡀⣠⣿⣿⣛⣛⣖⣣⣿⣧⠀⠀⠀⠀⠀⠑⠈⠓⠛⠛⠛⠁⠀⠔⣴⡟⣕⡼⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⣔⠟⠋⣌⣫⡏⠀⠀⠀⣨⠏⠼⠋⠀⠀⢀⣠⣤⣴⣤⢀⡀⣀⠀⠀⢀⣾⠟⢼⡿⢸⡥⠀⠀\n";
        std::cout << "⠀⠀⢠⡞⠁⡀⢀⠀⠀⠀⠺⠿⣽⣶⠀⠀⠀⠐⣪⣽⡿⢿⠿⠿⠏⢳⣧⠄⢀⡾⠁⠈⢾⡇⠜⠱⠀⠀\n";
        std::cout << "⠀⣰⡋⠠⢾⣽⣿⡖⢲⣤⡦⠛⡠⠏⠀⠀⠀⠀⠄⠀⠁⠀⣀⠀⠀⠉⠁⢠⡟⠀⠀⡄⣿⠂⠀⠆⡃⠀\n";
        std::cout << "⢸⣍⣄⠀⠀⠙⠉⡉⠴⣉⠀⠊⠉⠀⠀⣰⢚⡡⣄⣆⣄⣈⣉⣩⣦⠀⣰⠏⠀⠀⠘⠞⠃⢀⠐⡤⣛⡀\n";
        std::cout << "⠈⢆⠉⠿⣶⣀⡀⠀⠀⠀⠀                                    \n";
        std::cout << "⠎⠁⣶⣦⣍⠙⡓⠶⣤⣄⣤⣀⣀⡚⠉⠻⢛⣛⣿⡤⢈⠀⠐⣴⠏⠩⠜⠀⢠⣮⡅⢇⣘⣽⡿⢤⠏\n";
        std::cout << "⠀⠎⠁⣶⣦⣍⠙⡓⠶⣤⣄⣤⣀⣀⡚⠉⠻⢛⣛⣿⡤⢈⠀⠐⣴⠏⠩⠜⠀⢠⣮⡅⢇⣘⣽⡿⢤⠏\n";
        std::cout << "⠀⠀⠸⡀⠈⠀⠉⢛⠧⣀⠀⠀⠁⠠⡩⣩⣛⠻⡷⣲⡤⣀⣾⠃⠐⣿⠏⠀⠀⣽⡏⠐⠞⡳⠁⠀⠀\n";
        std::cout << "⠀⠀⠀⠡⠀⡤⣠⡀⠀⠒⢬⡂⠀⠐⢦⣟⢿⣦⣄⢳⣭⣹⠁⠀⢧⡏⠀⠠⣆⠯⠀⠀⠀⠜⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⡂⢪⣿⣿⣧⢦⡄⠒⢠⣀⠀⠈⠪⡙⠷⣗⢧⡙⡇⠀⠘⠀⠀⢄⡁⠅⠀⢀⠎⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠱⢀⡌⠜⣻⢿⣯⡱⠀⠠⠉⣢⢦⢄⣁⠋⠑⡡⠸⡄⠀⠀⢠⢾⡁⠀⡠⠃⠀⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠰⠶⠟⠋⢀⠐⠀⠂⠌⡸⠀⠀⠠⡸⣽⣻⣧⡔⣂⢌⠑⣻⢀⠀⢉⣿⡀⡔⠁⠀⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠀⠀⠈⠐⠀⠂⠌⡸⠀⠀⠠⡸⣽⣻⣧⡔⣂⢌⠑⣻⢀⠀⢉⣿⡀⡔⠁⠀⠀⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠐⠱⢚⢌⡻⡛⢿⣦⠀⠡⠘⣦⠀⣼⣧⡝⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠍⡟⡧⠈⢸⠀⣿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠃⢠⠧⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
       

        hunger += 5;
        if (hunger > 100) hunger = 100;
        happiness += 10;
        if (happiness > 100) happiness = 100;
    }

    void satoru_gojo() {
        std::cout << "?? : satoru~"<< std::endl;


        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠀⠀⠀⠀⠀⠀⠀⢀⠀⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡤⠀⠀⠀⢠⠄⠀⡟⡇⠀⠀⠀⠀⢠⣄⡎⢠⠏⠀⢰⠀⣿⡀⣆⠀⠀⠀⠀⢸⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
        std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡁⠀⠀⢀⡟⠀⣸⠀⡇⠀⠀⠀⠀⣼⡟⢠⡏⠀⠀⡘⢀⠟⡇⡟⡄⠀⡄⠀⢸⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
        std::cout << "⠀⢀⡇⠀⠀⠀⠀⠀⠀⠀⡈⡇⠀⢀⣞⠇⢠⠇⠘⣣⠀⠀⠀⢀⡟⣰⡟⠀⠀⢠⡇⣼⡆⡇⡇⠹⡀⡇⠀⢸⣿⡻⡀⢸⡄⠀⠀⠀⠀⠀" << std::endl;
        std::cout << "⠀⣸⢱⠀⠀⡀⠀⠀⠀⠀⡇⡇⢀⣜⢸⠀⡜⠀⢀⣿⠀⠀⢀⣞⡴⡟⢰⠀⠀⠸⢠⠏⡇⣧⡃⠀⢣⣰⠀⢸⠇⣧⢧⣘⡇⡀⠀⠀⠀⠀" << std::endl;
        std::cout << "⠀⡏⣸⡇⠀⣧⠀⠀⠀⠀⡇⡇⡼⠉⢹⢀⣧⣤⣀⣿⡆⢀⡾⡏⡇⡇⡜⠀⠀⠀⡼⠀⡇⣿⠁⣀⣬⣿⠀⢸⠀⢹⡘⢻⠀⣿⠀⢀⠀⠀" << std::endl;
        std::cout << "⣼⣰⢻⡿⡄⣿⡀⢠⠀⠀⡇⢿⣃⣄⡿⣼⣀⡈⢹⢣⢧⠟⢹⣳⠃⣷⡇⠀⠀⢸⣃⣴⠇⡸⠛⠉⢀⣸⠀⢸⠀⠀⡇⢸⢠⢿⠀⢸⢀⣆" << std::endl;
        std::cout << "⢳⢣⣾⣷⢳⣇⢇⠀⡆⠀⡇⣺⡷⠿⠃⡛⠻⢿⣽⣾⡼⡀⣸⢿⠀⣿⡇⠀⢠⣿⠏⢱⢀⣷⣾⣭⡿⠿⠄⣾⣯⣶⣣⣇⡾⢸⢀⡇⣾⢻" << std::endl;
        std::cout << "⡟⠛⡼⠈⣇⠉⠘⣆⣿⠀⢧⡁⠀⢀⡁⣥⢄⣀⠈⡿⣇⢧⡇⡸⢠⠃⠇⢀⣿⠃⢀⣿⣸⠟⠉⢀⣀⣀⠄⠄⠀⣽⣻⢻⡇⣸⢸⢳⠙⡆" << std::endl;
        std::cout << "⣧⠀⣯⠀⢸⡄⠀⠘⣿⣇⢸⣷⣞⠉⢿⠿⠿⠋⠉⢷⣼⠈⣇⣧⠏⢸⢀⣞⡏⣤⠀⣼⣧⢀⠴⠺⠿⠿⠇⠈⣳⣿⣏⣾⠁⣿⣿⡏⣸⠁" << std::endl;
        std::cout << "⢿⣦⠈⢣⡈⢿⡀⠀⢸⢿⣾⠁⠻⠿⢷⣤⣤⣶⢞⣟⣽⣷⣿⣟⣶⣾⣞⡞⠇⠘⡟⠛⠓⠛⠓⠒⢸⠏⣀⣴⣿⣿⣿⣼⣡⠟⠁⣰⣿" << std::endl;
        std::cout << "⣶⣿⣷⡄⠉⠲⣿⣦⠸⡘⣿⣇⠀⠀⠺⡒⠺⠿⠯⠭⠤⠿⣿⠏⣟⣿⠎⠐⡄⠀⠘⡟⠛⠓⠛⠓⠒⢸⠏⣀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
        std::cout << "⣿⣿⣯⣽⡄⠀⠘⣿⣷⡇⠸⣿⡄⠀⠀⠁⠀⠀⠀⠀⠀⣼⠋⢰⡿⠃⠀⢸⠀⠀⠀⣷⠀⠀⠀⠀⠀⠉⠀⢈⣽⣿⣽⣿⣿⠁⢀⣾⣿⣿" << std::endl;
        std::cout << "⣿⣿⣿⣿⣿⡤⠞⠹⡈⠻⡄⠹⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠋⠀⠀⠀⢸⠀⠀⣰⠋⠀⠀⠀⠰⠾⠿⣿⣿⣿⡟⣿⢿⠟⢶⣾⣿⣿⣿" << std::endl;
        std::cout << "⣿⣿⣿⣿⣿⣿⣶⣯⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠦⠖⠃⠀⠀⠀⠀⠀⠀⠀⠉⠙⠛⠛⠛⣿⣿⣿⣿⣿⣿⣿" << std::endl;
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⢀⣠⠀⠀⠀⠀⠀⠀⠀⠤⠔⠛⠛⠉⠙⢻⣿⣿⣿⣿⣿⣿⣿" << std::endl;
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠀⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠒⠚⣶⣦⡄⣼⣿⣿⣿⣿⣿⣿⣿" << std::endl;
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⣯⣼⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠳⣎⠳⣄⠀⠀⠀⠀⠀⠀⠀⠖⠻⠿⢿⣿⣿⣿⡿⠿⠶⠤⠀⠀⠀⠀⠀⠀⠤⠔⠛⠛⠛⣿⣿⣿⣿⣿⣿" << std::endl;
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣾⣦⣬⣳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣦⣤⣄⣀⣀⣀⣀⣀⣀⣠⣾⣥⣤⣴⣶⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
         std::cout << "You are not..."<< std::endl;

         happiness -= 10;

    }
     void status_gojo() {
        std::cout << "Name: " << name << "\n";
        std::cout << "Hunger: " << hunger << "\n";
        std::cout << "Happiness: " << happiness << "\n";
    }


};

int main() {
    std::string name; // 변수 name을 정의
    std::cout << "Choice Tama's name, please: ";
    std::cin >> name;

    Tamagotchi myTamagotchi(name);

    char choice;
    if (name == "gojo"){
        do {
        std::cout << "Choose an option:\n";
        std::cout << "1. Feed\n";
        std::cout << "2. Play\n";
        std::cout << "3. Check Status\n";
        std::cout << "4. call him satoru\n";
        std::cout << "5. Quit\n";

        std::cin >> choice;

        switch (choice) {
            case '1':
                myTamagotchi.feed_gojo();
                break;
            case '2':
                myTamagotchi.play_gojo();
                break;
            case '3':
                myTamagotchi.status_gojo();
                break;
             case '4':
                myTamagotchi.satoru_gojo();
                break;   
            case '5':
                std::cout << "Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != '5');



    }
    else {
        do {
        std::cout << "Choose an option:\n";
        std::cout << "1. Feed\n";
        std::cout << "2. Play\n";
        std::cout << "3. Check Status\n";
        std::cout << "4. Quit\n";

        std::cin >> choice;

        switch (choice) {
            case '1':
                myTamagotchi.feed();
                break;
            case '2':
                myTamagotchi.play();
                break;
            case '3':
                myTamagotchi.status();
                break;
            case '4':
                std::cout << "Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != '4');


    }

    

    return 0;
}




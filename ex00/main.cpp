
int main(int ac, char **av)
{
    if (ac != 2){
        std::cout << "Enter corrrect arguments" << std::endl;
        return (1);
    }
    std::string con(av[1]);
    convert(con);
}

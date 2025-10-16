#include "farm_printer.hpp"
#include "farm.hpp"

FarmPrinter::FarmPrinter(Farm *Farm : farm(farm))
{

}

std::string FarmPrinter::pretty_print()
{
    std::string output = "";
    for(int i = 0; i < farm->get_number_of_rows(); i++)
    {
        for (int j = 0; j < farm->get_number_of_columns(); i++)
        {
            output += 
        }
    }
    return ". \n";
}
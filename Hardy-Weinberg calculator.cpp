/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
void print_odds(float dominant, float recessive){
    //Print the rest of the odds based off of dominant and recessive allele frequencies
    cout<<"Dominant allele frequency: "<<dominant<<endl;
    cout<<"Recessive allele frequency: "<<recessive<<endl;
    cout<<"Homozygous dominant percentage: "<<dominant*dominant<<endl;
    cout<<"Heterozygous percentage: "<<2*dominant*recessive<<endl;
    cout<<"Homozygous Recessive percentage: "<<recessive*recessive<<endl;
}
int main()
{
    string type;
    string d_or_r;
    //Take inputs
    cout<<"Is the given information the genotype or phenotype of a population?: ";
    cin>>type;
    cout<< "Is the given information for the dominant or recessive trait?: ";
    cin>>d_or_r;
    float d;
    float r;
    float input;
    cout<< "Please enter the proportion as a decimal (e.g. 0.36 for 36%): ";
    //Do calculations to find dominant and recessive allele odds
    if(type == "Genotype" or type == "genotype"){
        cin>>input;
        if(d_or_r == "Dominant" or d_or_r == "dominant"){
            d = input;
            r = 1-input;
            print_odds(d, r);
        }
        if (d_or_r == "Recessive" or d_or_r == "recessive"){
            r = input;
            d = 1-r;
            print_odds(d, r);
        }
    }
    else{
        cin>>input;
        if (d_or_r == "Recessive" or d_or_r == "recessive"){
            r = sqrt(input);
            d = 1-r;
            print_odds(d, r);
        }
        if (d_or_r == "Dominant" or d_or_r == "dominant"){
            r = sqrt(1-input);
            d = 1-r;
            print_odds(d, r);
        }
    }
}
#ifndef _Shallow_vs_Deep_H_
#define _Shallow_vs_Deep_H_
#include <iostream>
#include <string>



class Shallow {

private:
    int *sdata;

public:
    void set_data_value (int d) {
        *sdata = d;
    }

    int get_data_value() {
        return *sdata;
    }

    Shallow( int d ) {
        sdata = new int;
        *sdata = d;
    }

    Shallow ( const Shallow &source ) 
        :sdata{source.sdata} {
        std::cout << "Copy constructor - shallow" << std::endl;
    }

    ~Shallow() { // Destructor 
        delete sdata; // free storage
        std::cout << "Destructor freeing shallow data" << std::endl;
    }

};

class Deep {

private:
    int *ddata;

public:
    Deep( int d ) {
        ddata = new int;
        *ddata = d;
    }

    Deep( const Deep &source )
        :Deep{*source.ddata} {
            std::cout << "Copy constructor - deep" << std::endl;
    }

    ~Deep() {
        delete ddata;
        std::cout << "Destructor freeing deep data" << std::endl;
    }

    void set_data_value( int d ) {
        *ddata = d;
    }

    int get_data_value() {
        return *ddata;
    }

};

void display_shallow( Shallow s ) {
    std::cout << s.get_data_value() << std::endl;
}

void display_deep( Deep d ) {
    std::cout << d.get_data_value() << std::endl;
}

#endif // _Shallow_vs_Deep_H_
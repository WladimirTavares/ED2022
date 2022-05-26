#ifndef JOSEPHUS_HPP
#define JOSEPHUS_HPP
class Josephus {
    private:
        int n, e;
        // vetor usado para guardar os identificadores das pessoas    
        int * elem;
        // vetor usado para checar se uma pessoa está viva
        bool * vivo;
        // método para descobrir a próxima pessoa viva
        int next(int pos);
        void kill(int pos);
    public:
        
        Josephus(int n, int e);
        int survivor();
};

#endif
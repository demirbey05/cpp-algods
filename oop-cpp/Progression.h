#ifndef CPP_ALGODS_PROGRESSION_H
#define CPP_ALGODS_PROGRESSION_H

class Progression
{
public:
    Progression(long f = 0) : first(f), cur(f){};
    virtual ~Progression(){}; // If you use any virtual function you should use virtual destructor
    void printProgression(int n);

protected:
    virtual long firstValue();
    virtual long nextValue();

protected:
    long first;
    long cur;
};

class ArithProgression : public Progression
{
public:
    ArithProgression(long i = 1);

protected:
    virtual long nextValue();

protected:
    long inc;
};

class GeomProgression : public Progression
{
public:
    GeomProgression(long mul = 2);

protected:
    virtual long nextValue();

protected:
    long multiplier;
};

class FibonacciProgression : public Progression
{
public:
    FibonacciProgression(long f = 0, long s = 1);

protected:
    virtual long firstValue();
    virtual long nextValue();

private:
    long second;
    long prev;
};

#endif

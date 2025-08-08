class DisplejCitac
{
private:
    int count = 0;
    int pins[3] = {16, 17, 18};
public:
    DisplejCitac(int pin1, int pin2, int pin3);
    void init();
    void setNumber(int);
    void update();
};

/*
DisplejCitac::DisplejCitac( args )
{
}

DisplejCitac::~DisplejCitac()
{
}
*/
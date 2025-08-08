class TridniDioda
{
private:
    int Pin;
    unsigned long nextTime;
public:
    int Period;
    void update();
    TridniDioda(int Pin, int Period);
};

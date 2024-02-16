#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string generateRandomBits(int length)
{
    string result;
    for (int i = 0; i < length; ++i)
    {
        result += (rand() % 2) ? '1' : '0';
    }
    return result;
}

string xorOperation(const string &a, const string &b)
{
    string result;
    for (size_t i = 0; i < b.length(); ++i)
    {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    return result;
}

string performDivision(string dividend, const string &divisor)
{
    string quotient;
    while (dividend.length() >= divisor.length())
    {
        if (dividend[0] == '1')
        {
            dividend = xorOperation(dividend.substr(0, divisor.length()), divisor) + dividend.substr(divisor.length());
        }
        else
        {
            dividend = dividend.substr(1);
        }
    }
    return dividend;
}

string appendCRC(string data, const string &generator)
{
    string paddedData = data + string(generator.length() - 1, '0');
    string crc = performDivision(paddedData, generator);
    return data + crc;
}

string introduceErrors(string frame, int errorProbability = 10)
{
    for (char &bit : frame)
    {
        if (rand() % errorProbability == 0)
        {
            bit = (bit == '1') ? '0' : '1';
        }
    }
    return frame;
}

bool verifyFrame(string frame, const string &generator)
{
    string remainder = performDivision(frame, generator);
    return remainder.find('1') == string::npos; // True if no '1's are found, indicating no error
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    string generator;
    int k;
    cout << "Enter the generator polynomial P: ";
    cin >> generator;
    // generator = "110101"
    cout << "Enter the number of bits in the message (k): ";
    cin >> k;
    // k = 10

    string data = generateRandomBits(k); // Generate k-bit data

    string frame = appendCRC(data, generator);
    cout << "Original frame: " << frame << endl;

    string errorFrame = introduceErrors(frame, 5); // Introduce errors with a probability of 1/5
    cout << "Frame with errors: " << errorFrame << endl;

    bool isValid = verifyFrame(errorFrame, generator);
    cout << "Frame is " << (isValid ? "valid" : "invalid") << endl;

    return 0;
}
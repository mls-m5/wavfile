
#include <iostream>
#include <cmath>
#include <vector>
#include "wavfile.h"
#include <fstream>

using namespace std;

int main() {
    WavFile file("output.wav");
    
    vector <float> data(44100);
    for (int i = 0; i < data.size(); ++i) {
        data[i] = sin((float) i / 44100. * 880 * 2);
    }
    
    file.write(data);
    file.close();

    return 0;
}
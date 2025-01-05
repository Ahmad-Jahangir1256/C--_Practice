#include <iostream>
#include <iomanip> // Include this header for manipulators like setw and setfill
using namespace std;
int main ()
{
    cout << "Using endl manipulator:" << endl;
    cout << "Hello, I am currently using different manipulators" << endl; // endl is a manipulator that is used to insert a new line character and flush the stream.

    cout << "Using ends manipulator:" << endl;
    cout << "Hello, I am currently using different manipulators" << ends << " "; // ends is a manipulator that is used to insert a null character at the end of the stream.

    cout << "Using flush manipulator:" << endl;
    cout << "Hello, I am currently using different manipulators" << flush << " "; // flush is a manipulator that is used to flush the output buffer.

    cout << "Using unitbuf and nounitbuf manipulators:" << endl;
    cout << unitbuf << "Hello, I am currently using different manipulators" << nounitbuf << " "; // unitbuf is a manipulator that is used to flush the output buffer after each insertion operation. nounitbuf disables it.

    cout << "Using showbase and noshowbase manipulators:" << endl;
    cout << showbase << hex << 255 << noshowbase << " "; // showbase is a manipulator that is used to show the base of the number. noshowbase disables it.

    cout << "Using showpoint and noshowpoint manipulators:" << endl;
    cout << showpoint << 123.0 << noshowpoint << " "; // showpoint is a manipulator that is used to show the decimal point. noshowpoint disables it.

    cout << "Using showpos and noshowpos manipulators:" << endl;
    cout << showpos << 123 << noshowpos << " "; // showpos is a manipulator that is used to show the positive sign. noshowpos disables it.

    cout << "Using uppercase and nouppercase manipulators:" << endl;
    cout << uppercase << hex << 255 << nouppercase << " "; // uppercase is a manipulator that is used to show the uppercase letters. nouppercase disables it.

    cout << "Using dec, hex, and oct manipulators:" << endl;
    cout << dec << 255 << " " << hex << 255 << " " << oct << 255 << " "; // dec, hex, and oct are manipulators that are used to show the number in decimal, hexadecimal, and octal formats respectively.

    cout << "Using fixed and scientific manipulators:" << endl;
    cout << fixed << 123.456 << " " << scientific << 123.456 << " "; // fixed is a manipulator that is used to show the fixed-point notation. scientific shows scientific notation.

    cout << "Using defaultfloat manipulator:" << endl;
    cout << defaultfloat << 123.456 << " "; // defaultfloat is a manipulator that is used to show the default floating-point notation.

    cout << "Using left, right, and internal manipulators with setw and setfill:" << endl;
    cout << left << setw(10) << setfill('*') << "Hello" << " "; // left is a manipulator that is used to show the left alignment. setw sets the width of the field. setfill sets the fill character.
    cout << right << setw(10) << setfill('*') << "Hello" << " "; // right is a manipulator that is used to show the right alignment.
    cout << internal << setw(10) << setfill('*') << "Hello" << " "; // internal is a manipulator that is used to show the internal alignment.

    cout << "Using boolalpha and noboolalpha manipulators:" << endl;
    cout << boolalpha << true << " " << noboolalpha << true << " "; // boolalpha is a manipulator that is used to show boolean values as true/false. noboolalpha shows boolean values as 1/0.

    cout << "Using resetiosflags and setiosflags manipulators:" << endl;
    cout << resetiosflags(ios::showbase) << "Hello, I am currently using different manipulators" << " "; // resetiosflags is a manipulator that is used to reset the specified format flags.
    cout << setiosflags(ios::showbase) << "Hello, I am currently using different manipulators" << " "; // setiosflags is a manipulator that is used to set the specified format flags.

    return 0;
}
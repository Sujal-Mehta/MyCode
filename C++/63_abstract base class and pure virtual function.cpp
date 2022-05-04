#include <iostream>
#include <cstring>
using namespace std;

// abstract base class -> where we make a base class by pre thinking that we will derived classes from that base class 
class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }

    // pure virtual function -> each derived class should have atleast one function associated with virtual function
    virtual void display() = 0; // -> do nothing function
};

class cwhvideo : public cwh
{
    float videolength;

public:
    cwhvideo(string s, float r, float vl) : cwh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "ratings : " << rating << " out of 5 stars" << endl;
        cout << "length of this video is : " << videolength << endl;
    };
};

class cwhtext : public cwh
{
    int words;

public:
    cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "ratings of text tutorial : " << rating << " out of 5 stars" << endl;
        cout << "No. of words in this text tutorial is : " << words << " words " << endl;
    };
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for video
    title = "cplus tutorial";
    vlen = 4.56;
    rating = 4.89;

    cwhvideo video(title, rating, vlen);
    // video.display();

    //for text
    title = "cplus tutorial text";
    words = 4433;
    rating = 3.9;

    cwhtext text(title, rating, words);
    // text.display();

    // calling display using pointer
    cwh *tuts[2];
    tuts[0] = &video;
    tuts[1] = &text;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

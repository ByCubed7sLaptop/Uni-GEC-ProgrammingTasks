#include <iostream>

using namespace std;

void Program10()
{
    /*
         Pretend that, for some reason, you are now entitled to my stash of Haribo. 
         There are 40 packets available and to make things fair, they are to be shared out equally, as in you all have to have the same number of packets. 
         On the day when I decide to hand out the sweet sweet Haribo, only 14 students turned up (pretend that a popular video game had been released that day and many students were suddenly too “ill” to turn up).

         Write a program that
              1.	Calculates how many of the 40 packets of Haribo do each of the students get?
              2.	Calculates how many I get, which will be the remainder left after sharing the 40 packets as equally as possible

         Your final answers should be 2 packets for each student, leaving 12 packets left for me.
         What we want to see is you coding the solution and getting the computer to do the right calculations that come up with these 2 answers.
         We’re not bothered about the answers themselves, similar to how many mathematics questions are more concerned with “method marks” than the final answer.
    */

    //  There are 40 packets available
    int totalPackets = 40;

    // 14 students turned up
    int totalStudents = 14;

    int packetsPerStudent = totalPackets / totalStudents;
    int packetsLeft = totalPackets % totalStudents;

    cout << "Total packets = " << totalPackets << endl;
    cout << "Total students = " << totalStudents << endl;
    cout << endl;
    cout << "Packets per student = " << packetsPerStudent << endl;
    cout << "Packets left = " << packetsLeft << endl;

}
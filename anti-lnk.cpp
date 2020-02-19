/* Anti-lnk : The Shortcut Trojan Removal Tool
 *
 * Author   : Danial "dfx" Fitri
 * Function : This tool aims to remove the common
 *            "shortcut" problems in drives
 * Requires : Administrator rights
 * Version  : 1.0
 * Build    : 1
 */

#include <iostream>
#include <string.h>
using namespace std;

void ui();
void clean(char drv[]);

int main()
{
  char drive[2];
  
  ui();
  cout << "Type your infected drive letter: ";
  cin.get(drive, 2);
  
  cout << "\nDrive to clean >> " << drive << ":" << endl << endl;
  clean(drive);
  
  cout << "\nCleanup finished.\n";
  system("pause");
  return 0;
}

void ui()
{
  cout << "+---- Anti-lnk : Shortcut Removal Tool ----+\n";
  cout << "|                                          |\n";
  cout << "|     Type the drive letter of the         |\n";
  cout << "|     drive infected with the shortcut     |\n";
  cout << "|     trojan. Example: Type \"C\" for C:     |\n";
  cout << "|     drive.                               |\n";
  cout << "|     NOTE: I'm not responsible for any    |\n";
  cout << "|     damage done to your system.          |\n";
  cout << "|                                          |\n";
  cout << "|     Created by Danial \"dfx\" Fitri        |\n";
  cout << "|     - F1T2 (18/19)                       |\n";
  cout << "|                                          |\n";
  cout << "+------------------------------------------+\n\n";
}

void clean(char drv[])
{
  char cmmd[160] = "cd ";
  strcat(cmmd, drv);
  strcat(cmmd, ": && attrib -s -r -h *.* /s /d /l && del *.lnk && del autorun.inf && mkdir autorun.inf && attrib +h +r +s +a autorun.inf && cd autorun.inf && mkdir .\\con\\");
  system(cmmd);
}
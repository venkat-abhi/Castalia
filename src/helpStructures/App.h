/****************************************************************************
 *  Copyright: National ICT Australia,  2007 - 2010                         *
 *  Developed at the ATP lab, Networked Systems research theme              *
 *  Author(s): Athanassios Boulis, Dimosthenis Pediaditakis                 *
 *  This file is distributed under the terms in the attached LICENSE file.  *
 *  If you do not find this file, copies can be found by writing to:        *
 *                                                                          *
 *      NICTA, Locked Bag 9013, Alexandria, NSW 1435, Australia             *
 *      Attention:  License Inquiry.                                        *
 *                                                                          *  
 ****************************************************************************/

#ifndef APP_H_
#define APP_H_

#include <iostream>
#include <fstream>
using namespace std;

class App {
 private:
	static ofstream theFile;
	static string fileName;

 public:
	App(const string & fName);
	static void setDebugFileName(const string & fName);
	static ofstream & getStream(void);
	static void closeStream(void);
};

#endif				

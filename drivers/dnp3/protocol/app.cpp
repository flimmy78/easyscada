//
// $Id: app.cpp 4 2007-04-10 22:55:27Z sparky1194 $
//
// Copyright (C) 2007 Turner Technolgoies Inc. http://www.turner.ca
//
// Permission is hereby granted, free of charge, to any person 
// obtaining a copy of this software and associated documentation 
// files (the "Software"), to deal in the Software without 
// restriction, including without limitation the rights to use, 
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the 
// Software is furnished to do so, subject to the following 
// conditions:
//      
// The above copyright notice and this permission notice shall be 
// included in all copies or substantial portions of the Software. 
//      
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR 
// OTHER DEALINGS IN THE SOFTWARE.

#include "app.hpp"

Application::Application(int*                       debugLevel_p,
			 DnpAddr_t                  dnpAddr,
			 UserNumber_t               num,
			 Datalink::DatalinkConfig&  datalinkConfig,
			 EventInterface*            eventInterface_p,
			 TimerInterface*            timerInterface_p) :
  timer_p( timerInterface_p),
  debug_p(debugLevel_p),
  addr( dnpAddr),
  userNum( num),
  dl( datalinkConfig, eventInterface_p),
  of( eventInterface_p),
  db_p( eventInterface_p),
  secureAuthenticationEnabled( false)
{
}

Application::~Application() {}


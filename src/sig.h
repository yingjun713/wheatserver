// Signal handler module
//
// Copyright (c) 2013 The Wheatserver Author. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.

#ifndef WHEATSEVER_SIGNAL_H
#define WHEATSEVER_SIGNAL_H

// We change SIGHUP, SIGQUIT, SIGINT, SIGTERM, SIGTTIN, SIGTTOU, SIGUSR1,
// SIGUSR2, SIGWINCH, SIGCHLD, SIGSEGV handler function to customize use.
void initMasterSignals();
void initWorkerSignals();

void signalProc(int signal);
void signalGenericHandle(int sig);

/* Master Handle Signal Function */
void handleChld();
void handleHup();
void handleQuit();
void handleInt();
void handleTerm();
void handleTtin();
void handleTtou();
void handleUsr1();
void handleUsr2();
void handleWinch();
void handleSegv();

/* Worker Handle Signal Function */
void handleWorkerUsr1(int);
void handleWorkerAbort(int);
void handleWorkerQuit(int);
void handleWorkerAlrm(int);

#endif

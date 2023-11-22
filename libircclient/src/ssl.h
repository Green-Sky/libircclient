/*
 * Copyright (C) 2004-2012 George Yunaev gyunaev@ulduzsoft.com
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 */

#include "./session.h"

#ifndef INCLUDE_IRC_SSL_H
#define INCLUDE_IRC_SSL_H

int session_socket_read( irc_session_t * session );
int session_socket_write( irc_session_t * session );

#endif /* INCLUDE_IRC_SSL_H */

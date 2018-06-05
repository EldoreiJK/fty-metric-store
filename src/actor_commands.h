/*  =========================================================================
    actor_commands - actor commands
    Note: This file was manually amended, see below

    Copyright (C) 2014 - 2017 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

#ifndef ACTOR_COMMANDS_H_INCLUDED
#define ACTOR_COMMANDS_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @interface

// Supported actor commands:
//  $TERM
//      terminate
//
//  CONNECT/enpoint/name
//      connect to malamute broker on 'endpoint' registering as 'name'
//
//  PRODUCER/stream
//      publish to specified 'stream'
//
//  CONSUMER/stream/pattern
//      consume messages from 'stream' with subjects matching 'pattern'
//
//  CONFIGURE/config_file
//      configure actor, where
//      config_file - full path to mapping file
//  ^^^ NOT IMPLEMETED YET - command logic is empty

// Performs the actor commands logic
// Destroys the message
// Returns 1 for $TERM (means exit), 0 otherwise
FTY_METRIC_STORE_EXPORT int
    actor_commands (
            mlm_client_t *client,
            zmsg_t **message_p);

//  Self test of this class
//  Note: Keep this definition in sync with fty_metric_store_classes.h
FTY_METRIC_STORE_PRIVATE void
    actor_commands_test (bool verbose);

//  @end

#ifdef __cplusplus
}
#endif

#endif

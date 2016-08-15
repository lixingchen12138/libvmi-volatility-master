/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _QEMU_PROTOCOL_H_RPCGEN
#define _QEMU_PROTOCOL_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#include "internal.h"
#include "remote_protocol.h"
#include <arpa/inet.h>

struct qemu_domain_monitor_command_args {
        remote_nonnull_domain dom;
        remote_nonnull_string cmd;
        u_int flags;
};
typedef struct qemu_domain_monitor_command_args qemu_domain_monitor_command_args;

struct qemu_domain_monitor_command_ret {
        remote_nonnull_string result;
};
typedef struct qemu_domain_monitor_command_ret qemu_domain_monitor_command_ret;

struct qemu_domain_attach_args {
        u_int pid_value;
        u_int flags;
};
typedef struct qemu_domain_attach_args qemu_domain_attach_args;

struct qemu_domain_attach_ret {
        remote_nonnull_domain dom;
};
typedef struct qemu_domain_attach_ret qemu_domain_attach_ret;

struct qemu_domain_agent_command_args {
        remote_nonnull_domain dom;
        remote_nonnull_string cmd;
        int timeout;
        u_int flags;
};
typedef struct qemu_domain_agent_command_args qemu_domain_agent_command_args;

struct qemu_domain_agent_command_ret {
        remote_string result;
};
typedef struct qemu_domain_agent_command_ret qemu_domain_agent_command_ret;

struct qemu_connect_domain_monitor_event_register_args {
        remote_domain dom;
        remote_string event;
        u_int flags;
};
typedef struct qemu_connect_domain_monitor_event_register_args qemu_connect_domain_monitor_event_register_args;

struct qemu_connect_domain_monitor_event_register_ret {
        int callbackID;
};
typedef struct qemu_connect_domain_monitor_event_register_ret qemu_connect_domain_monitor_event_register_ret;

struct qemu_connect_domain_monitor_event_deregister_args {
        int callbackID;
};
typedef struct qemu_connect_domain_monitor_event_deregister_args qemu_connect_domain_monitor_event_deregister_args;

struct qemu_domain_monitor_event_msg {
        int callbackID;
        remote_nonnull_domain dom;
        remote_nonnull_string event;
        int64_t seconds;
        u_int micros;
        remote_string details;
};
typedef struct qemu_domain_monitor_event_msg qemu_domain_monitor_event_msg;
#define QEMU_PROGRAM 0x20008087
#define QEMU_PROTOCOL_VERSION 1

enum qemu_procedure {
        QEMU_PROC_DOMAIN_MONITOR_COMMAND = 1,
        QEMU_PROC_DOMAIN_ATTACH = 2,
        QEMU_PROC_DOMAIN_AGENT_COMMAND = 3,
        QEMU_PROC_CONNECT_DOMAIN_MONITOR_EVENT_REGISTER = 4,
        QEMU_PROC_CONNECT_DOMAIN_MONITOR_EVENT_DEREGISTER = 5,
        QEMU_PROC_DOMAIN_MONITOR_EVENT = 6,
};
typedef enum qemu_procedure qemu_procedure;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_qemu_domain_monitor_command_args (XDR *, qemu_domain_monitor_command_args*);
extern  bool_t xdr_qemu_domain_monitor_command_ret (XDR *, qemu_domain_monitor_command_ret*);
extern  bool_t xdr_qemu_domain_attach_args (XDR *, qemu_domain_attach_args*);
extern  bool_t xdr_qemu_domain_attach_ret (XDR *, qemu_domain_attach_ret*);
extern  bool_t xdr_qemu_domain_agent_command_args (XDR *, qemu_domain_agent_command_args*);
extern  bool_t xdr_qemu_domain_agent_command_ret (XDR *, qemu_domain_agent_command_ret*);
extern  bool_t xdr_qemu_connect_domain_monitor_event_register_args (XDR *, qemu_connect_domain_monitor_event_register_args*);
extern  bool_t xdr_qemu_connect_domain_monitor_event_register_ret (XDR *, qemu_connect_domain_monitor_event_register_ret*);
extern  bool_t xdr_qemu_connect_domain_monitor_event_deregister_args (XDR *, qemu_connect_domain_monitor_event_deregister_args*);
extern  bool_t xdr_qemu_domain_monitor_event_msg (XDR *, qemu_domain_monitor_event_msg*);
extern  bool_t xdr_qemu_procedure (XDR *, qemu_procedure*);

#else /* K&R C */
extern bool_t xdr_qemu_domain_monitor_command_args ();
extern bool_t xdr_qemu_domain_monitor_command_ret ();
extern bool_t xdr_qemu_domain_attach_args ();
extern bool_t xdr_qemu_domain_attach_ret ();
extern bool_t xdr_qemu_domain_agent_command_args ();
extern bool_t xdr_qemu_domain_agent_command_ret ();
extern bool_t xdr_qemu_connect_domain_monitor_event_register_args ();
extern bool_t xdr_qemu_connect_domain_monitor_event_register_ret ();
extern bool_t xdr_qemu_connect_domain_monitor_event_deregister_args ();
extern bool_t xdr_qemu_domain_monitor_event_msg ();
extern bool_t xdr_qemu_procedure ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_QEMU_PROTOCOL_H_RPCGEN */
/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h>
#include "phone_book.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

r_val *
add_to_database_1(entry *argp, CLIENT *clnt)
{
	static r_val clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, ADD_TO_DATABASE, xdr_entry, argp, xdr_r_val, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}

r_val *
remove_from_database_1(char **argp, CLIENT *clnt)
{
	static r_val clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, REMOVE_FROM_DATABASE, xdr_wrapstring, argp, xdr_r_val, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}

r_val *
lookup_name_1(char **argp, CLIENT *clnt)
{
	static r_val clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, LOOKUP_NAME, xdr_wrapstring, argp, xdr_r_val, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}

r_val *
list_1(void *argp, CLIENT *clnt)
{
	static r_val clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, LIST, xdr_void, argp, xdr_r_val, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}

int *
quit_1(void *argp, CLIENT *clnt)
{
	static int clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, QUIT, xdr_void, argp, xdr_int, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}

int *
terminate_1(void *argp, CLIENT *clnt)
{
	static int clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, TERMINATE, xdr_void, argp, xdr_int, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}

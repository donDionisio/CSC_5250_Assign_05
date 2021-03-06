/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "phone_book.h"

bool_t
xdr_entry(XDR *xdrs, entry *objp)
{

	if (!xdr_string(xdrs, &objp->name, 128))
		return (FALSE);
	if (!xdr_string(xdrs, &objp->number, 16))
		return (FALSE);
	if (!xdr_pointer(xdrs, (char **)&objp->next, sizeof(entry), (xdrproc_t)xdr_entry))
		return (FALSE);
	return (TRUE);
}

bool_t
xdr_r_val(XDR *xdrs, r_val *objp)
{

	if (!xdr_int(xdrs, &objp->num))
		return (FALSE);
	if (!xdr_string(xdrs, &objp->message, 256))
		return (FALSE);
	return (TRUE);
}

bool_t
xdr_linked_list(XDR *xdrs, linked_list *objp)
{

	if (!xdr_pointer(xdrs, (char **)&objp->head, sizeof(entry), (xdrproc_t)xdr_entry))
		return (FALSE);
	return (TRUE);
}

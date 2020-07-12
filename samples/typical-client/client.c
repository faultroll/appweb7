/*
    client.c - Client using the GET method to retrieve a web page.

    This sample demonstrates retrieving content using the HTTP GET method.

<<<<<<< HEAD
=======
    MOB - should be renamed simple-client
        typical-client should be event based with notifier and http2

>>>>>>> local
    Copyright (c) All Rights Reserved. See copyright notice at the bottom of the file.
 */
/***************************** Includes *******************************/

#include    "appweb.h"

/********************************* Code *******************************/

MAIN(simpleClient, int argc, char **argv, char **envp)
{
    Http        *http;
    HttpConn    *conn;
    char        *err;
    int         status;

    /*
       Create the Multithreaded Portable Runtime and start it.
     */
    mprCreate(argc, argv, 0);
    mprStart();

    /*
       Get a client http object to work with. We can issue multiple requests with this one object.
       Add the conn as a root object so the GC won't collect it while we are using it.
     */
    http = httpCreate(HTTP_CLIENT_SIDE);

    /*
        Open a connection to issue the GET. Then finalize the request output - this forces the request out.
     */
<<<<<<< HEAD
    if ((conn = httpRequest("GET", "http://embedthis.com/index.html", NULL, &err)) == 0) {
=======
    if ((conn = httpRequest("GET", "http://example.com/index.html", NULL, 1, &err)) == 0) {
>>>>>>> local
        mprError("Can't get URL: %s", err);
        exit(2);
    }
    status = httpGetStatus(conn);
    /*
       Examine the HTTP response HTTP code. 200 is success.
     */
    if (status != 200) {
        mprError("Server responded with status %d\n", status);
        exit(1);
    }
    mprPrintf("Server responded with: %s\n", httpReadString(conn));
    mprDestroy();
    return 0;
}


/*
<<<<<<< HEAD
    @copy   default

    Copyright (c) Embedthis Software. All Rights Reserved.

=======
    Copyright (c) Embedthis Software. All Rights Reserved.
>>>>>>> local
    This software is distributed under commercial and open source licenses.
    You may use the Embedthis Open Source license or you may acquire a
    commercial license from Embedthis Software. You agree to be fully bound
    by the terms of either license. Consult the LICENSE.md distributed with
    this software for full details and other copyrights.
<<<<<<< HEAD

    Local variables:
    tab-width: 4
    c-basic-offset: 4
    End:
    vim: sw=4 ts=4 expandtab

    @end
=======
>>>>>>> local
 */

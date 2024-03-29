/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of Sdb.xs. Do not edit this file, edit Sdb.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Sdb.xs"
#ifdef __cplusplus
extern "C"{
#endif

#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#ifdef __cplusplus
}
#endif

#include "ppport.h"
#include "plSequoiadb.hpp"
#include "plCollectionSpace.hpp"
using namespace std ;
using namespace sdbclient ;
using namespace bson ;

#line 31 "Sdb.c"
#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#ifndef PERL_ARGS_ASSERT_CROAK_XS_USAGE
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)

/* prototype to pass -Wmissing-prototypes */
STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params);

STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params)
{
    const GV *const gv = CvGV(cv);

    PERL_ARGS_ASSERT_CROAK_XS_USAGE;

    if (gv) {
        const char *const gvname = GvNAME(gv);
        const HV *const stash = GvSTASH(gv);
        const char *const hvname = stash ? HvNAME(stash) : NULL;

        if (hvname)
            Perl_croak(aTHX_ "Usage: %s::%s(%s)", hvname, gvname, params);
        else
            Perl_croak(aTHX_ "Usage: %s(%s)", gvname, params);
    } else {
        /* Pants. I don't think that it should be possible to get here. */
        Perl_croak(aTHX_ "Usage: CODE(0x%"UVxf")(%s)", PTR2UV(cv), params);
    }
}
#undef  PERL_ARGS_ASSERT_CROAK_XS_USAGE

#ifdef PERL_IMPLICIT_CONTEXT
#define croak_xs_usage(a,b)	S_croak_xs_usage(aTHX_ a,b)
#else
#define croak_xs_usage		S_croak_xs_usage
#endif

#endif

/* NOTE: the prototype of newXSproto() is different in versions of perls,
 * so we define a portable version of newXSproto()
 */
#ifdef newXS_flags
#define newXSproto_portable(name, c_impl, file, proto) newXS_flags(name, c_impl, file, proto, 0)
#else
#define newXSproto_portable(name, c_impl, file, proto) (PL_Sv=(SV*)newXS(name, c_impl, file), sv_setpv(PL_Sv, proto), (CV*)PL_Sv)
#endif /* !defined(newXS_flags) */

#line 83 "Sdb.c"

XS(XS_SequoiaDB__Sdb_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 5)
       croak_xs_usage(cv,  "CLASS, pHostName, Port, pUsr, pPasswd");
    {
	const char *	pHostName = (const char *)SvPV_nolen(ST(1));
	int	Port = (int)SvIV(ST(2));
	const char *	pUsr = (const char *)SvPV_nolen(ST(3));
	const char *	pPasswd = (const char *)SvPV_nolen(ST(4));
	char *	CLASS = (char *)SvPV_nolen(ST(0));
	plSequoiadb *	RETVAL;

	RETVAL = new plSequoiadb(pHostName, Port, pUsr, pPasswd);
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), CLASS, (void *) RETVAL);
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_getCollectionSpace); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_getCollectionSpace)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, pCollectionSpaceName");
    {
	const char *	pCollectionSpaceName = (const char *)SvPV_nolen(ST(1));
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	plCollectionSpace *	RETVAL;

	RETVAL = THIS->getCollectionSpace(pCollectionSpaceName);
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::CollectionSpace", (void *) RETVAL);  
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_createCollectionSpace); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_createCollectionSpace)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items < 2 || items > 3)
       croak_xs_usage(cv,  "THIS, pCollectionSpaceName, sv=NULL");
    {
	const char *	pCollectionSpaceName = (const char *)SvPV_nolen(ST(1));
	SV *	sv;
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	plCollectionSpace *	RETVAL;

	if (items < 3)
	    sv = NULL;
	else {
	    sv = ST(2);
	}

	RETVAL = THIS->createCollectionSpace(pCollectionSpaceName, sv);
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::CollectionSpace", (void *) RETVAL);  
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_dropCollectionSpace); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_dropCollectionSpace)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, pCollectionSpaceName");
    {
	const char *	pCollectionSpaceName = (const char *)SvPV_nolen(ST(1));
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	bool	RETVAL;

	RETVAL = THIS->dropCollectionSpace(pCollectionSpaceName);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_createUsr); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_createUsr)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "THIS, user, passwd");
    {
	const char *	user = (const char *)SvPV_nolen(ST(1));
	const char *	passwd = (const char *)SvPV_nolen(ST(2));
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	bool	RETVAL;

	RETVAL = THIS->createUsr(user, passwd);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_dropDomain); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_dropDomain)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, domainName");
    {
	const char *	domainName = (const char *)SvPV_nolen(ST(1));
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	bool	RETVAL;

	RETVAL = THIS->dropDomain(domainName);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_listCollectionSpaces); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_listCollectionSpaces)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	plCursor *	RETVAL;

	RETVAL = THIS->listCollectionSpaces();
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::Cursor", (void *) RETVAL);  
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_listCollections); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_listCollections)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	plCursor *	RETVAL;

	RETVAL = THIS->listCollections();
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::Cursor", (void *) RETVAL);  
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_listReplicaGroups); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_listReplicaGroups)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	plCursor *	RETVAL;

	RETVAL = THIS->listReplicaGroups();
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::Cursor", (void *) RETVAL);  
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_createDomain); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_createDomain)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "THIS, domainName, sv");
    {
	const char *	domainName = (const char *)SvPV_nolen(ST(1));
	SV *	sv = ST(2);
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	plDomain *	RETVAL;

	RETVAL = THIS->createDomain(domainName, sv);
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::Domain", (void *) RETVAL);
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_getDomain); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_getDomain)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, domainName");
    {
	const char *	domainName = (const char *)SvPV_nolen(ST(1));
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	plDomain *	RETVAL;

	RETVAL = THIS->getDomain(domainName);
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::Domain", (void *) RETVAL);
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_createRG); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_createRG)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, rgName");
    {
	const char *	rgName = (const char *)SvPV_nolen(ST(1));
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	plReplicaGroup *	RETVAL;

	RETVAL = THIS->createRG(rgName);
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::ReplicaGroup", (void *) RETVAL);

    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_createCatalogRG); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_createCatalogRG)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items < 4 || items > 5)
       croak_xs_usage(cv,  "THIS, hostname, serviceName, databasePath, config = NULL");
    {
	const char *	hostname = (const char *)SvPV_nolen(ST(1));
	SV *	serviceName = ST(2);
	const char *	databasePath = (const char *)SvPV_nolen(ST(3));
	SV *	config;
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	plReplicaGroup *	RETVAL;

	if (items < 5)
	    config = NULL;
	else {
	    config = ST(4);
	}

	RETVAL = THIS->createCatalogRG(hostname, serviceName, databasePath, config);
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::ReplicaGroup", (void *) RETVAL);

    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_getRG); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_getRG)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, rgName");
    {
	const char *	rgName = (const char *)SvPV_nolen(ST(1));
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));
	plReplicaGroup *	RETVAL;

	RETVAL = THIS->getRG(rgName);
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::ReplicaGroup", (void *) RETVAL);

    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__Sdb_DESTROY); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__Sdb_DESTROY)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	plSequoiadb *   THIS = (plSequoiadb *) SvIV((SV*) SvRV(ST(0)));

	delete THIS;
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_SequoiaDB__Sdb); /* prototype to pass -Wmissing-prototypes */
XS(boot_SequoiaDB__Sdb)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
#if (PERL_REVISION == 5 && PERL_VERSION < 9)
    char* file = __FILE__;
#else
    const char* file = __FILE__;
#endif

    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(items); /* -W */
#ifdef XS_APIVERSION_BOOTCHECK
    XS_APIVERSION_BOOTCHECK;
#endif
    XS_VERSION_BOOTCHECK ;

        newXS("SequoiaDB::Sdb::new", XS_SequoiaDB__Sdb_new, file);
        newXS("SequoiaDB::Sdb::getCollectionSpace", XS_SequoiaDB__Sdb_getCollectionSpace, file);
        newXS("SequoiaDB::Sdb::createCollectionSpace", XS_SequoiaDB__Sdb_createCollectionSpace, file);
        newXS("SequoiaDB::Sdb::dropCollectionSpace", XS_SequoiaDB__Sdb_dropCollectionSpace, file);
        newXS("SequoiaDB::Sdb::createUsr", XS_SequoiaDB__Sdb_createUsr, file);
        newXS("SequoiaDB::Sdb::dropDomain", XS_SequoiaDB__Sdb_dropDomain, file);
        newXS("SequoiaDB::Sdb::listCollectionSpaces", XS_SequoiaDB__Sdb_listCollectionSpaces, file);
        newXS("SequoiaDB::Sdb::listCollections", XS_SequoiaDB__Sdb_listCollections, file);
        newXS("SequoiaDB::Sdb::listReplicaGroups", XS_SequoiaDB__Sdb_listReplicaGroups, file);
        newXS("SequoiaDB::Sdb::createDomain", XS_SequoiaDB__Sdb_createDomain, file);
        newXS("SequoiaDB::Sdb::getDomain", XS_SequoiaDB__Sdb_getDomain, file);
        newXS("SequoiaDB::Sdb::createRG", XS_SequoiaDB__Sdb_createRG, file);
        newXS("SequoiaDB::Sdb::createCatalogRG", XS_SequoiaDB__Sdb_createCatalogRG, file);
        newXS("SequoiaDB::Sdb::getRG", XS_SequoiaDB__Sdb_getRG, file);
        newXS("SequoiaDB::Sdb::DESTROY", XS_SequoiaDB__Sdb_DESTROY, file);
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}


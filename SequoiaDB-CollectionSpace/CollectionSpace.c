/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of CollectionSpace.xs. Do not edit this file, edit CollectionSpace.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "CollectionSpace.xs"
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

#include "plCollectionSpace.hpp"
#include "plCollection.hpp"

#line 29 "CollectionSpace.c"
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

#line 81 "CollectionSpace.c"

XS(XS_SequoiaDB__CollectionSpace_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__CollectionSpace_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "CLASS");
    {
	char *	CLASS = (char *)SvPV_nolen(ST(0));
	plCollectionSpace *	RETVAL;

	RETVAL = new plCollectionSpace();
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), CLASS, (void *) RETVAL);
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__CollectionSpace_getCollection); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__CollectionSpace_getCollection)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, pCollectionName");
    {
	const char *	pCollectionName = (const char *)SvPV_nolen(ST(1));
	plCollectionSpace *   THIS = (plCollectionSpace *) SvIV((SV*) SvRV(ST(0)));
	plCollection *	RETVAL;

	RETVAL = THIS->getCollection(pCollectionName);
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::Collection", (void *) RETVAL);

    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__CollectionSpace_createCollection); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__CollectionSpace_createCollection)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items < 2 || items > 3)
       croak_xs_usage(cv,  "THIS, pCollectionName, sv = NULL");
    {
	const char *	pCollectionName = (const char *)SvPV_nolen(ST(1));
	SV *	sv;
	plCollectionSpace *   THIS = (plCollectionSpace *) SvIV((SV*) SvRV(ST(0)));
	plCollection *	RETVAL;

	if (items < 3)
	    sv = NULL;
	else {
	    sv = ST(2);
	}

	RETVAL = THIS->createCollection(pCollectionName, sv);
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), "SequoiaDB::Collection", (void *) RETVAL);

    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__CollectionSpace_dropCollection); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__CollectionSpace_dropCollection)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, pCollectionName");
    {
	const char *	pCollectionName = (const char *)SvPV_nolen(ST(1));
	plCollectionSpace *   THIS = (plCollectionSpace *) SvIV((SV*) SvRV(ST(0)));
	bool	RETVAL;

	RETVAL = THIS->dropCollection(pCollectionName);
	ST(0) = boolSV(RETVAL);
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__CollectionSpace_getCSName); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__CollectionSpace_getCSName)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	plCollectionSpace *   THIS = (plCollectionSpace *) SvIV((SV*) SvRV(ST(0)));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = THIS->getCSName();
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__CollectionSpace_DESTROY); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__CollectionSpace_DESTROY)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	plCollectionSpace *   THIS = (plCollectionSpace *) SvIV((SV*) SvRV(ST(0)));

	delete THIS;
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_SequoiaDB__CollectionSpace); /* prototype to pass -Wmissing-prototypes */
XS(boot_SequoiaDB__CollectionSpace)
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

        newXS("SequoiaDB::CollectionSpace::new", XS_SequoiaDB__CollectionSpace_new, file);
        newXS("SequoiaDB::CollectionSpace::getCollection", XS_SequoiaDB__CollectionSpace_getCollection, file);
        newXS("SequoiaDB::CollectionSpace::createCollection", XS_SequoiaDB__CollectionSpace_createCollection, file);
        newXS("SequoiaDB::CollectionSpace::dropCollection", XS_SequoiaDB__CollectionSpace_dropCollection, file);
        newXS("SequoiaDB::CollectionSpace::getCSName", XS_SequoiaDB__CollectionSpace_getCSName, file);
        newXS("SequoiaDB::CollectionSpace::DESTROY", XS_SequoiaDB__CollectionSpace_DESTROY, file);
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}


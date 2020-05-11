/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of DATE.xs. Do not edit this file, edit DATE.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "DATE.xs"
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

#include "plBSONDATE.hpp"

using namespace bson ;

#line 31 "DATE.c"
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

#line 83 "DATE.c"

XS(XS_SequoiaDB__BSON__DATE_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__BSON__DATE_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items < 1 || items > 2)
       croak_xs_usage(cv,  "CLASS, mil = 0");
    {
	long	mil;
	char *	CLASS = (char *)SvPV_nolen(ST(0));
	plBSONDATE *	RETVAL;

	if (items < 2)
	    mil = 0;
	else {
	    mil = (long)SvIV(ST(1));
	}

	RETVAL = new plBSONDATE(mil);
	ST(0) = sv_newmortal();
   sv_setref_pv(ST(0), CLASS, (void *) RETVAL);

    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__BSON__DATE_setValue); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__BSON__DATE_setValue)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, mil");
    {
	long	mil = (long)SvIV(ST(1));
	plBSONDATE *   THIS = (plBSONDATE *) SvIV((SV*) SvRV(ST(0)));

	THIS->setValue(mil);
    }
    XSRETURN_EMPTY;
}


XS(XS_SequoiaDB__BSON__DATE_toString); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__BSON__DATE_toString)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	plBSONDATE *   THIS = (plBSONDATE *) SvIV((SV*) SvRV(ST(0)));
	const char *	RETVAL;
	dXSTARG;

	RETVAL = THIS->toString();
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_SequoiaDB__BSON__DATE_DESTROY); /* prototype to pass -Wmissing-prototypes */
XS(XS_SequoiaDB__BSON__DATE_DESTROY)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	plBSONDATE *   THIS = (plBSONDATE *) SvIV((SV*) SvRV(ST(0)));

	delete THIS;
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_SequoiaDB__BSON__DATE); /* prototype to pass -Wmissing-prototypes */
XS(boot_SequoiaDB__BSON__DATE)
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

        newXS("SequoiaDB::BSON::DATE::new", XS_SequoiaDB__BSON__DATE_new, file);
        newXS("SequoiaDB::BSON::DATE::setValue", XS_SequoiaDB__BSON__DATE_setValue, file);
        newXS("SequoiaDB::BSON::DATE::toString", XS_SequoiaDB__BSON__DATE_toString, file);
        newXS("SequoiaDB::BSON::DATE::DESTROY", XS_SequoiaDB__BSON__DATE_DESTROY, file);
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}


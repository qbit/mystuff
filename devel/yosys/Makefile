# $OpenBSD: Makefile,v 1.2 2015/05/28 19:59:29 ajacoutot Exp $

DISTNAME =		yosys-0.0.1

COMMENT =		open synthesis suite
CATEGORIES =		devel

HOMEPAGE =		https://github.com/cliffordwolf/yosys

GH_COMMIT =		e7c018e5d14c3c609669ab514a7e9111ff006022
GH_ACCOUNT =		cliffordwolf
GH_PROJECT =		yosys

# ISC
PERMIT_PACKAGE_CDROM =	Yes

USE_GMAKE =		Yes

MAKE_ENV =		CXX="eg++" \
			PATH=${PATH} \
			DESTDIR=${DESTDIR} \
			LDFLAGS+=${LDFLAGS}

MODPY_VERSION =		${MODPY_DEFAULT_VERSION_3}

LIB_DEPENDS =		lang/tcl/8.5 \
			devel/libffi

MODULES =		gcc4 \
			lang/python \
			lang/tcl

CONFIGURE_STYLE =	none

MODGCC4_ARCHS =		*
MODGCC4_LANGS =		c c++

SUBST_VARS +=		MODTCL_INCDIR
SUBST_VARS +=		MODTCL_LIBDIR
SUBST_VARS +=		MODTCL_BIN
SUBST_VARS +=		MODTCL_LIB

WANTLIB += c ffi m pthread readline tcl85 termcap

pre-configure:
	ln -sf ${LOCALBASE}/bin/python${MODPY_VERSION} ${WRKDIR}/bin/python3
	${SUBST_CMD} ${WRKDIST}/Makefile

do-configure:
	cd ${WRKSRC} && gmake config-gcc

.include <bsd.port.mk>

# $OpenBSD: Makefile,v 1.6 2016/01/26 13:05:26 sthen Exp $

ONLY_FOR_ARCHS=	amd64 i386

COMMENT=	V8 JavaScript for clients and servers

#GH_TAGNAME=	4.8.271.17
#GH_ACCOUNT=	v8
#GH_PROJECT=	v8
V8_VERSION=	4.8.271.17
EPOCH=		0
V8_ARCH=	${PKG_ARCH:S/amd64/x64/:S/i386/ia32/}
V8_RELEASE=	release

DISTNAME=	v8-${V8_VERSION}
PKGNAME=	lib${DISTNAME}

CATEGORIES=	lang

SHARED_LIBS=    v8            0.0

HOMEPAGE=	https://bugs.chromium.org/p/v8/

MASTER_SITES=	https://deftly.net/

MAINTAINER=	Aaron Bieber <abieber@openbsd.org>

# BSD
PERMIT_PACKAGE_CDROM=	Yes

BUILD_DEPENDS=		devel/gyp
LIB_DEPENDS=		devel/libexecinfo

WANTLIB += c execinfo m pthread ssl stdc++ 

USE_GMAKE=		Yes
CONFIGURE_STYLE=	python.port.mk
MODULES=		lang/clang \
			lang/python

MODCLANG_ARCHS=	*
MODCLANG_LANGS=	c++

SUBST_VARS+= 	WRKDIR
SUBST_VARS+= 	V8_ARCH

MAKE_FLAGS+=	library=shared ARCHES=${V8_ARCH} MODES=${V8_RELEASE} \
		DEFAULT_ARCHES=${V8_ARCH}
MAKE_ENV+=	V=1 CXX=c++ CCFLAGS+="${CFLAGS}" MODES=${V8_RELEASE} \
		DEFAULT_ARCHES=${V8_ARCH} CXXFLAGS="${CXXFLAGS} \
		-I${LOCALBASE}/include" PATH=${WRKSRC}/bin:${PATH}

TEST_TARGET=	check

pre-configure:
	@# Bad practice, but prevents a whole stack of patches.
	ln -sf ${LOCALBASE}/bin/python${MODPY_VERSION} ${WRKDIR}/bin/python 
	${SUBST_CMD} ${WRKDIST}/tools/gyp/v8.gyp ${WRKDIST}/Makefile

do-install:
	cp -p ${WRKSRC}/include/*.h ${PREFIX}/include/
	cp -p ${WRKSRC}/out/${V8_ARCH}.${V8_RELEASE}/d8 ${PREFIX}/bin
	cp -p ${WRKSRC}/out/${V8_ARCH}.${V8_RELEASE}/lib.target/libv8.so.* \
		${PREFIX}/lib/

.include <bsd.port.mk>

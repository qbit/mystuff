# $OpenBSD: Makefile,v 1.17 2013/03/11 11:20:28 espie Exp $

COMMENT=	PhantomJS is a headless WebKit scriptable with a JavaScript API

V=	1.9.0

DISTNAME=	phantomjs-${V}-source
PKGNAME= ${DISTNAME:S/-source//g}

EXTRACT_SUFX=	.zip

WRKDIST= ${WRKDIR}/${PKGNAME}

CATEGORIES=	www devel

HOMEPAGE=	http://phamtomjs.org/

MAINTAINER=	Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES=	https://phantomjs.googlecode.com/files/

VMEM_WARNING=	Yes

WANTLIB +=	c crypto execinfo kvm m pthread ssl stdc++ util v8 z

MAKE_ENV+=	V=1 CXX=c++ CCFLAGS+="${CFLAGS}" CXXFLAGS="${CXXFLAGS}"

.include <bsd.port.mk>

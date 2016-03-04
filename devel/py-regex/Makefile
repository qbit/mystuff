# $OpenBSD: Makefile,v 1.11 2015/04/02 14:21:14 jasper Exp $

COMMENT =	aternative regular expression module

MODPY_EGG_VERSION = 2016.02.25

DISTNAME =	regex-${MODPY_EGG_VERSION}
PKGNAME =	py-${DISTNAME}

CATEGORIES =	devel

HOMEPAGE =	https://bitbucket.org/mrabarnett/mrab-regex

WANTLIB += pthread python2.7

# PSF
PERMIT_PACKAGE_CDROM =	Yes

MODPY_PI =	Yes

MODULES =	lang/python

NO_TEST =	Yes

.include <bsd.port.mk>

# $OpenBSD: Makefile,v 1.9 2013/03/10 22:55:05 espie Exp $

COMMENT =		wrapper for subprocess

MODPY_EGG_VERSION =	0.1.4
DISTNAME =		sarge-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}
CATEGORIES =		devel

HOMEPAGE =		http://sarge.readthedocs.org/

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# Apache
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=s/sarge/}

MODULES =		lang/python

NO_TEST =		Yes

.include <bsd.port.mk>

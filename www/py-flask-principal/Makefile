# $OpenBSD: Makefile,v 1.8 2014/04/28 20:52:13 edd Exp $

COMMENT =		identity management for flask

MODPY_EGG_VERSION =	0.4.0
DISTNAME =		Flask-Principal-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME:L}

CATEGORIES =		www

HOMEPAGE =		http://packages.python.org/Flask-Principal/

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=F/Flask-Principal/}

MODULES =		lang/python

RUN_DEPENDS +=		www/py-flask

MODPY_SETUPTOOLS =	Yes

.include <bsd.port.mk>

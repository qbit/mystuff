# $OpenBSD: Makefile,v 1.8 2014/04/28 20:52:13 edd Exp $

COMMENT =		user session management for flask

MODPY_EGG_VERSION =	0.2.11
DISTNAME =		Flask-Login-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME:L}

CATEGORIES =		www

HOMEPAGE =		https://github.com/maxcountryman/flask-login

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=F/Flask-Login/}

MODULES =		lang/python

RUN_DEPENDS +=		www/py-flask

MODPY_SETUPTOOLS =	Yes

NO_TEST =		Yes

.include <bsd.port.mk>

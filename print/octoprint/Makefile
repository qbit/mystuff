# $OpenBSD: Makefile.template,v 1.71 2014/07/10 12:33:17 sthen Exp $

COMMENT =		web based 3d printing application

#https://github.com/foosel/OctoPrint/releases
GH_PROJECT =		OctoPrint
GH_ACCOUNT =		foosel
GH_TAGNAME =		1.2.9

DISTNAME =		${GH_PROJECT:L}-${GH_TAGNAME}

CATEGORIES =		print www

HOMEPAGE =		http://octoprint.org/

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# GPLv3
PERMIT_PACKAGE_CDROM =	Yes

MODULES =		lang/python

MODPY_SETUPTOOLS =	Yes

LIB_DEPENDS =		www/py-werkzeug \
			www/py-tornado \
			www/py-sockjs-tornado \
			devel/py-pylru \
			devel/py-sarge \
			textproc/py-yaml \
			sysutils/py-watchdog \
			www/py-requests \
			www/py-flask \
			www/py-flask-assets \
			www/py-flask-babel \
			www/py-flask-login \
			www/py-flask-principal \
			devel/py-semantic_version \
			www/py-flask-assets \
			www/py-flask-babel \
			www/py-awesome-slugify \
			security/py-rsa \
			devel/py-serial \
			net/py-netaddr \
			net/py-netifaces \
			www/py-requests \
			sysutils/py-pkginfo \
			www/py-webassets \
			sysutils/py-psutil

.include <bsd.port.mk>

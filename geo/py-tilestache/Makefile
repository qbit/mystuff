# $OpenBSD: Makefile,v 1.11 2015/04/02 14:21:14 jasper Exp $

COMMENT =	stylish alternative for caching your map tiles.

MODPY_EGG_VERSION = 1.50.1

DISTNAME =	TileStache-${MODPY_EGG_VERSION}
PKGNAME =	py-${DISTNAME}

CATEGORIES =	geo

HOMEPAGE =	http://pypi.python.org/pypi/TileStache

# BSD
PERMIT_PACKAGE_CDROM =	Yes

MODPY_PI =	Yes

MODULES =	lang/python

BUILD_DEPENDS =	${RUN_DEPENDS}
RUN_DEPENDS =	www/py-werkzeug \
		geo/py-modestmaps \
		geo/gdal,-python \
		graphics/py-Pillow \
		graphics/mapnik \
		devel/py-simplejson

MODPY_SETUPTOOLS = Yes

NO_TEST =	Yes

.include <bsd.port.mk>

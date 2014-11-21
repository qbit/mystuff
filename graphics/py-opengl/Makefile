# $OpenBSD: Makefile,v 1.11 2013/03/11 11:10:55 espie Exp $

COMMENT =		Python bindings for OpenGL
MODPY_EGG_VERSION =	3.1.0
DISTNAME =		PyOpenGL-${MODPY_EGG_VERSION}
PKGNAME =		py-opengl-${MODPY_EGG_VERSION}

CATEGORIES =		graphics
HOMEPAGE =		http://pyopengl.sourceforge.net/
MASTER_SITES =		${MASTER_SITE_PYPI:=P/PyOpenGL/}

# BSD
PERMIT_PACKAGE_CDROM =	Yes

MODULES =		lang/python
TEST_IS_INTERACTIVE =	X11

LIB_DEPENDS =		graphics/freeglut
TEST_DEPENDS =		devel/pygame \
			${BASE_PKGPATH} \
			math/py-numpy

MODPY_SETUPTOOLS = 	Yes

do-test:
	${MODPY_BIN} ${WRKSRC}/tests/tests.py

.include <bsd.port.mk>

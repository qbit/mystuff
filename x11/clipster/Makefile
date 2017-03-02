# $OpenBSD: Makefile.template,v 1.76 2017/02/25 16:04:20 danj Exp $

COMMENT =	python clipboard manager

GH_ACCOUNT =	mrichar1
GH_PROJECT =	clipster
GH_COMMIT =	dfa75b52ee3a41fff7534aca165dc0e6a24a3680

DISTNAME =	clipster-2017.03.02

CATEGORIES =	x11

HOMEPAGE =	https://github.com/mrichar1/clipster/

# AGPL-3.0
PERMIT_PACKAGE_CDROM =	Yes

# "make port-lib-depends-check" can help
#WANTLIB =		???

MODULES =		lang/python
LIB_DEPENDS =		devel/py-gobject3

pre-configure:
	@find ${WRKDIST} -name clipster | \
		xargs sed -i 's,/usr/bin/python,${MODPY_BIN},g'


do-build:
	@echo "nothing"

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/clipster ${PREFIX}/bin

.include <bsd.port.mk>

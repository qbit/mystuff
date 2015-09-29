# $OpenBSD: Makefile,v 1.9 2013/04/27 16:02:59 kili Exp $

COMMENT=	multiple transmission decoder

GH_ACCOUNT =	EliasOenal
GH_PROJECT =	multimon-ng
GH_COMMIT =	4cc984f35f859539c94aa56d3fc6218a6de51148

DISTNAME=	multimon-ng-0.0.2
CATEGORIES=	comms

HOMEPAGE=	https://github.com/EliasOenal/multimon-ng.git

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

MODULES=        x11/qt4

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	comms/rtl-sdr \
		audio/pulseaudio

CFLAGS+=	-I${X11BASE}/include
LDFLAGS+=	-L${X11BASE}/lib

CONFIGURE_ENV=  HOME=${WRKDIR}
CONFIGURE_ARGS+= ${MODQT_CONFIGURE_ARGS}

MAKE_FLAGS=     QMAKE_CXX="${CXX}" \
		QMAKE_CFLAGS="${CFLAGS}" \
                QMAKE_CXXFLAGS_RELEASE="${CXXFLAGS}" \
                HOME=${WRKDIR} \
                PREFIX=${PREFIX}

FAKE_FLAGS=     INSTALL_ROOT=${DESTDIR}

do-configure:
	cd ${WRKBUILD} && \
	env -i ${CONFIGURE_ENV} qmake4 ${MAKE_FLAGS} \
	${WRKSRC}/multimon-ng.pro

.include <bsd.port.mk>

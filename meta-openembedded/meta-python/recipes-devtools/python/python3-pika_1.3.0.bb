SUMMARY = "Pika is a RabbitMQ (AMQP 0-9-1) client library for Python."
DESCRIPTION = " \
Pika is a pure-Python implementation of the AMQP 0-9-1 protocol \
including RabbitMQ's extensions. \
"
SECTION = "devel/python"
HOMEPAGE = "https://pika.readthedocs.io"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=678ec81495ba50edf81e84e4f1aa69f3"

SRC_URI[sha256sum] = "15357ddc47a5c28f0b07d80e93d504cbbf7a1ad5e1cd129ecd27afe76472c529"

inherit pypi python_setuptools_build_meta

PYPI_PACKAGE = "pika"

DEPENDS += " \
	${PYTHON_PN}-setuptools-scm-native \
	${PYTHON_PN}-toml-native \
"

RDEPENDS:${PN} += " \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-tornado \
	${PYTHON_PN}-twisted \
"

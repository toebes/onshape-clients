# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.103
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class BTIdentityManagementParams(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'provider_type': 'int',
        'disable_password_sign_in': 'bool',
        'idp_certificate': 'str',
        'idp_entity_id': 'str',
        'idp_redirect_url': 'str',
        'metadata_must_be_signed': 'bool',
        'enabled': 'bool',
        'name': 'str'
    }

    attribute_map = {
        'provider_type': 'providerType',
        'disable_password_sign_in': 'disablePasswordSignIn',
        'idp_certificate': 'idpCertificate',
        'idp_entity_id': 'idpEntityId',
        'idp_redirect_url': 'idpRedirectURL',
        'metadata_must_be_signed': 'metadataMustBeSigned',
        'enabled': 'enabled',
        'name': 'name'
    }

    def __init__(self, provider_type=None, disable_password_sign_in=None, idp_certificate=None, idp_entity_id=None, idp_redirect_url=None, metadata_must_be_signed=None, enabled=None, name=None):  # noqa: E501
        """BTIdentityManagementParams - a model defined in OpenAPI"""  # noqa: E501

        self._provider_type = None
        self._disable_password_sign_in = None
        self._idp_certificate = None
        self._idp_entity_id = None
        self._idp_redirect_url = None
        self._metadata_must_be_signed = None
        self._enabled = None
        self._name = None
        self.discriminator = None

        if provider_type is not None:
            self.provider_type = provider_type
        if disable_password_sign_in is not None:
            self.disable_password_sign_in = disable_password_sign_in
        if idp_certificate is not None:
            self.idp_certificate = idp_certificate
        if idp_entity_id is not None:
            self.idp_entity_id = idp_entity_id
        if idp_redirect_url is not None:
            self.idp_redirect_url = idp_redirect_url
        if metadata_must_be_signed is not None:
            self.metadata_must_be_signed = metadata_must_be_signed
        if enabled is not None:
            self.enabled = enabled
        if name is not None:
            self.name = name

    @property
    def provider_type(self):
        """Gets the provider_type of this BTIdentityManagementParams.  # noqa: E501


        :return: The provider_type of this BTIdentityManagementParams.  # noqa: E501
        :rtype: int
        """
        return self._provider_type

    @provider_type.setter
    def provider_type(self, provider_type):
        """Sets the provider_type of this BTIdentityManagementParams.


        :param provider_type: The provider_type of this BTIdentityManagementParams.  # noqa: E501
        :type: int
        """

        self._provider_type = provider_type

    @property
    def disable_password_sign_in(self):
        """Gets the disable_password_sign_in of this BTIdentityManagementParams.  # noqa: E501


        :return: The disable_password_sign_in of this BTIdentityManagementParams.  # noqa: E501
        :rtype: bool
        """
        return self._disable_password_sign_in

    @disable_password_sign_in.setter
    def disable_password_sign_in(self, disable_password_sign_in):
        """Sets the disable_password_sign_in of this BTIdentityManagementParams.


        :param disable_password_sign_in: The disable_password_sign_in of this BTIdentityManagementParams.  # noqa: E501
        :type: bool
        """

        self._disable_password_sign_in = disable_password_sign_in

    @property
    def idp_certificate(self):
        """Gets the idp_certificate of this BTIdentityManagementParams.  # noqa: E501


        :return: The idp_certificate of this BTIdentityManagementParams.  # noqa: E501
        :rtype: str
        """
        return self._idp_certificate

    @idp_certificate.setter
    def idp_certificate(self, idp_certificate):
        """Sets the idp_certificate of this BTIdentityManagementParams.


        :param idp_certificate: The idp_certificate of this BTIdentityManagementParams.  # noqa: E501
        :type: str
        """

        self._idp_certificate = idp_certificate

    @property
    def idp_entity_id(self):
        """Gets the idp_entity_id of this BTIdentityManagementParams.  # noqa: E501


        :return: The idp_entity_id of this BTIdentityManagementParams.  # noqa: E501
        :rtype: str
        """
        return self._idp_entity_id

    @idp_entity_id.setter
    def idp_entity_id(self, idp_entity_id):
        """Sets the idp_entity_id of this BTIdentityManagementParams.


        :param idp_entity_id: The idp_entity_id of this BTIdentityManagementParams.  # noqa: E501
        :type: str
        """

        self._idp_entity_id = idp_entity_id

    @property
    def idp_redirect_url(self):
        """Gets the idp_redirect_url of this BTIdentityManagementParams.  # noqa: E501


        :return: The idp_redirect_url of this BTIdentityManagementParams.  # noqa: E501
        :rtype: str
        """
        return self._idp_redirect_url

    @idp_redirect_url.setter
    def idp_redirect_url(self, idp_redirect_url):
        """Sets the idp_redirect_url of this BTIdentityManagementParams.


        :param idp_redirect_url: The idp_redirect_url of this BTIdentityManagementParams.  # noqa: E501
        :type: str
        """

        self._idp_redirect_url = idp_redirect_url

    @property
    def metadata_must_be_signed(self):
        """Gets the metadata_must_be_signed of this BTIdentityManagementParams.  # noqa: E501


        :return: The metadata_must_be_signed of this BTIdentityManagementParams.  # noqa: E501
        :rtype: bool
        """
        return self._metadata_must_be_signed

    @metadata_must_be_signed.setter
    def metadata_must_be_signed(self, metadata_must_be_signed):
        """Sets the metadata_must_be_signed of this BTIdentityManagementParams.


        :param metadata_must_be_signed: The metadata_must_be_signed of this BTIdentityManagementParams.  # noqa: E501
        :type: bool
        """

        self._metadata_must_be_signed = metadata_must_be_signed

    @property
    def enabled(self):
        """Gets the enabled of this BTIdentityManagementParams.  # noqa: E501


        :return: The enabled of this BTIdentityManagementParams.  # noqa: E501
        :rtype: bool
        """
        return self._enabled

    @enabled.setter
    def enabled(self, enabled):
        """Sets the enabled of this BTIdentityManagementParams.


        :param enabled: The enabled of this BTIdentityManagementParams.  # noqa: E501
        :type: bool
        """

        self._enabled = enabled

    @property
    def name(self):
        """Gets the name of this BTIdentityManagementParams.  # noqa: E501


        :return: The name of this BTIdentityManagementParams.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTIdentityManagementParams.


        :param name: The name of this BTIdentityManagementParams.  # noqa: E501
        :type: str
        """

        self._name = name

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, BTIdentityManagementParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

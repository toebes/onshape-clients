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


class ApiResponses(object):
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
        'extensions': 'dict(str, object)',
        'default': 'ApiResponse',
        'empty': 'bool'
    }

    attribute_map = {
        'extensions': 'extensions',
        'default': 'default',
        'empty': 'empty'
    }

    def __init__(self, extensions=None, default=None, empty=None):  # noqa: E501
        """ApiResponses - a model defined in OpenAPI"""  # noqa: E501

        self._extensions = None
        self._default = None
        self._empty = None
        self.discriminator = None

        if extensions is not None:
            self.extensions = extensions
        if default is not None:
            self.default = default
        if empty is not None:
            self.empty = empty

    @property
    def extensions(self):
        """Gets the extensions of this ApiResponses.  # noqa: E501


        :return: The extensions of this ApiResponses.  # noqa: E501
        :rtype: dict(str, object)
        """
        return self._extensions

    @extensions.setter
    def extensions(self, extensions):
        """Sets the extensions of this ApiResponses.


        :param extensions: The extensions of this ApiResponses.  # noqa: E501
        :type: dict(str, object)
        """

        self._extensions = extensions

    @property
    def default(self):
        """Gets the default of this ApiResponses.  # noqa: E501


        :return: The default of this ApiResponses.  # noqa: E501
        :rtype: ApiResponse
        """
        return self._default

    @default.setter
    def default(self, default):
        """Sets the default of this ApiResponses.


        :param default: The default of this ApiResponses.  # noqa: E501
        :type: ApiResponse
        """

        self._default = default

    @property
    def empty(self):
        """Gets the empty of this ApiResponses.  # noqa: E501


        :return: The empty of this ApiResponses.  # noqa: E501
        :rtype: bool
        """
        return self._empty

    @empty.setter
    def empty(self, empty):
        """Sets the empty of this ApiResponses.


        :param empty: The empty of this ApiResponses.  # noqa: E501
        :type: bool
        """

        self._empty = empty

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
        if not isinstance(other, ApiResponses):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

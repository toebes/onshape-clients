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


class BTUpdateReferenceParams(object):
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
        'reference_updates': 'list[UpdateParams]'
    }

    attribute_map = {
        'reference_updates': 'referenceUpdates'
    }

    def __init__(self, reference_updates=None):  # noqa: E501
        """BTUpdateReferenceParams - a model defined in OpenAPI"""  # noqa: E501

        self._reference_updates = None
        self.discriminator = None

        if reference_updates is not None:
            self.reference_updates = reference_updates

    @property
    def reference_updates(self):
        """Gets the reference_updates of this BTUpdateReferenceParams.  # noqa: E501


        :return: The reference_updates of this BTUpdateReferenceParams.  # noqa: E501
        :rtype: list[UpdateParams]
        """
        return self._reference_updates

    @reference_updates.setter
    def reference_updates(self, reference_updates):
        """Sets the reference_updates of this BTUpdateReferenceParams.


        :param reference_updates: The reference_updates of this BTUpdateReferenceParams.  # noqa: E501
        :type: list[UpdateParams]
        """

        self._reference_updates = reference_updates

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
        if not isinstance(other, BTUpdateReferenceParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

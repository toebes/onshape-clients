# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.104
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class BTNextPartNumbersParam(object):
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
        'item_part_numbers': 'list[BTNextPartNumberParam]',
        'skip_part_numbers': 'list[str]'
    }

    attribute_map = {
        'item_part_numbers': 'itemPartNumbers',
        'skip_part_numbers': 'skipPartNumbers'
    }

    def __init__(self, item_part_numbers=None, skip_part_numbers=None):  # noqa: E501
        """BTNextPartNumbersParam - a model defined in OpenAPI"""  # noqa: E501

        self._item_part_numbers = None
        self._skip_part_numbers = None
        self.discriminator = None

        if item_part_numbers is not None:
            self.item_part_numbers = item_part_numbers
        if skip_part_numbers is not None:
            self.skip_part_numbers = skip_part_numbers

    @property
    def item_part_numbers(self):
        """Gets the item_part_numbers of this BTNextPartNumbersParam.  # noqa: E501


        :return: The item_part_numbers of this BTNextPartNumbersParam.  # noqa: E501
        :rtype: list[BTNextPartNumberParam]
        """
        return self._item_part_numbers

    @item_part_numbers.setter
    def item_part_numbers(self, item_part_numbers):
        """Sets the item_part_numbers of this BTNextPartNumbersParam.


        :param item_part_numbers: The item_part_numbers of this BTNextPartNumbersParam.  # noqa: E501
        :type: list[BTNextPartNumberParam]
        """

        self._item_part_numbers = item_part_numbers

    @property
    def skip_part_numbers(self):
        """Gets the skip_part_numbers of this BTNextPartNumbersParam.  # noqa: E501


        :return: The skip_part_numbers of this BTNextPartNumbersParam.  # noqa: E501
        :rtype: list[str]
        """
        return self._skip_part_numbers

    @skip_part_numbers.setter
    def skip_part_numbers(self, skip_part_numbers):
        """Sets the skip_part_numbers of this BTNextPartNumbersParam.


        :param skip_part_numbers: The skip_part_numbers of this BTNextPartNumbersParam.  # noqa: E501
        :type: list[str]
        """

        self._skip_part_numbers = skip_part_numbers

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
        if not isinstance(other, BTNextPartNumbersParam):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
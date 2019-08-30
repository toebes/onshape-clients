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


class BTUpdateReleasePackageParams(object):
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
        'items': 'list[BTReleasePackageItemParams]',
        'item_ids': 'list[str]',
        'empty': 'bool',
        'properties': 'list[BTPropertyValueParam]'
    }

    attribute_map = {
        'items': 'items',
        'item_ids': 'itemIds',
        'empty': 'empty',
        'properties': 'properties'
    }

    def __init__(self, items=None, item_ids=None, empty=None, properties=None):  # noqa: E501
        """BTUpdateReleasePackageParams - a model defined in OpenAPI"""  # noqa: E501

        self._items = None
        self._item_ids = None
        self._empty = None
        self._properties = None
        self.discriminator = None

        if items is not None:
            self.items = items
        if item_ids is not None:
            self.item_ids = item_ids
        if empty is not None:
            self.empty = empty
        if properties is not None:
            self.properties = properties

    @property
    def items(self):
        """Gets the items of this BTUpdateReleasePackageParams.  # noqa: E501


        :return: The items of this BTUpdateReleasePackageParams.  # noqa: E501
        :rtype: list[BTReleasePackageItemParams]
        """
        return self._items

    @items.setter
    def items(self, items):
        """Sets the items of this BTUpdateReleasePackageParams.


        :param items: The items of this BTUpdateReleasePackageParams.  # noqa: E501
        :type: list[BTReleasePackageItemParams]
        """

        self._items = items

    @property
    def item_ids(self):
        """Gets the item_ids of this BTUpdateReleasePackageParams.  # noqa: E501


        :return: The item_ids of this BTUpdateReleasePackageParams.  # noqa: E501
        :rtype: list[str]
        """
        return self._item_ids

    @item_ids.setter
    def item_ids(self, item_ids):
        """Sets the item_ids of this BTUpdateReleasePackageParams.


        :param item_ids: The item_ids of this BTUpdateReleasePackageParams.  # noqa: E501
        :type: list[str]
        """

        self._item_ids = item_ids

    @property
    def empty(self):
        """Gets the empty of this BTUpdateReleasePackageParams.  # noqa: E501


        :return: The empty of this BTUpdateReleasePackageParams.  # noqa: E501
        :rtype: bool
        """
        return self._empty

    @empty.setter
    def empty(self, empty):
        """Sets the empty of this BTUpdateReleasePackageParams.


        :param empty: The empty of this BTUpdateReleasePackageParams.  # noqa: E501
        :type: bool
        """

        self._empty = empty

    @property
    def properties(self):
        """Gets the properties of this BTUpdateReleasePackageParams.  # noqa: E501


        :return: The properties of this BTUpdateReleasePackageParams.  # noqa: E501
        :rtype: list[BTPropertyValueParam]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this BTUpdateReleasePackageParams.


        :param properties: The properties of this BTUpdateReleasePackageParams.  # noqa: E501
        :type: list[BTPropertyValueParam]
        """

        self._properties = properties

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
        if not isinstance(other, BTUpdateReleasePackageParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

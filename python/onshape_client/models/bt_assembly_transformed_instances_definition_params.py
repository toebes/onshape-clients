# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    OpenAPI spec version: 1.93
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class BTAssemblyTransformedInstancesDefinitionParams(object):
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
        'transform_groups': 'list[TransformGroup]'
    }

    attribute_map = {
        'transform_groups': 'transformGroups'
    }

    def __init__(self, transform_groups=None):  # noqa: E501
        """BTAssemblyTransformedInstancesDefinitionParams - a model defined in OpenAPI"""  # noqa: E501

        self._transform_groups = None
        self.discriminator = None

        if transform_groups is not None:
            self.transform_groups = transform_groups

    @property
    def transform_groups(self):
        """Gets the transform_groups of this BTAssemblyTransformedInstancesDefinitionParams.  # noqa: E501


        :return: The transform_groups of this BTAssemblyTransformedInstancesDefinitionParams.  # noqa: E501
        :rtype: list[TransformGroup]
        """
        return self._transform_groups

    @transform_groups.setter
    def transform_groups(self, transform_groups):
        """Sets the transform_groups of this BTAssemblyTransformedInstancesDefinitionParams.


        :param transform_groups: The transform_groups of this BTAssemblyTransformedInstancesDefinitionParams.  # noqa: E501
        :type: list[TransformGroup]
        """

        self._transform_groups = transform_groups

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
        if not isinstance(other, BTAssemblyTransformedInstancesDefinitionParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
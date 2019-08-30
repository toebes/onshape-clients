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


class BTItemParams(object):
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
        'company_id': 'str',
        'publish_state': 'int',
        'name': 'str'
    }

    attribute_map = {
        'company_id': 'companyId',
        'publish_state': 'publishState',
        'name': 'name'
    }

    def __init__(self, company_id=None, publish_state=None, name=None):  # noqa: E501
        """BTItemParams - a model defined in OpenAPI"""  # noqa: E501

        self._company_id = None
        self._publish_state = None
        self._name = None
        self.discriminator = None

        if company_id is not None:
            self.company_id = company_id
        if publish_state is not None:
            self.publish_state = publish_state
        if name is not None:
            self.name = name

    @property
    def company_id(self):
        """Gets the company_id of this BTItemParams.  # noqa: E501


        :return: The company_id of this BTItemParams.  # noqa: E501
        :rtype: str
        """
        return self._company_id

    @company_id.setter
    def company_id(self, company_id):
        """Sets the company_id of this BTItemParams.


        :param company_id: The company_id of this BTItemParams.  # noqa: E501
        :type: str
        """

        self._company_id = company_id

    @property
    def publish_state(self):
        """Gets the publish_state of this BTItemParams.  # noqa: E501


        :return: The publish_state of this BTItemParams.  # noqa: E501
        :rtype: int
        """
        return self._publish_state

    @publish_state.setter
    def publish_state(self, publish_state):
        """Sets the publish_state of this BTItemParams.


        :param publish_state: The publish_state of this BTItemParams.  # noqa: E501
        :type: int
        """

        self._publish_state = publish_state

    @property
    def name(self):
        """Gets the name of this BTItemParams.  # noqa: E501


        :return: The name of this BTItemParams.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTItemParams.


        :param name: The name of this BTItemParams.  # noqa: E501
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
        if not isinstance(other, BTItemParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

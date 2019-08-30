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


class ExternalAccount(object):
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
        'id': 'str',
        'object': 'str',
        'account': 'str',
        'customer': 'str',
        'metadata': 'dict(str, str)',
        'instance_url': 'str'
    }

    attribute_map = {
        'id': 'id',
        'object': 'object',
        'account': 'account',
        'customer': 'customer',
        'metadata': 'metadata',
        'instance_url': 'instanceURL'
    }

    def __init__(self, id=None, object=None, account=None, customer=None, metadata=None, instance_url=None):  # noqa: E501
        """ExternalAccount - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._object = None
        self._account = None
        self._customer = None
        self._metadata = None
        self._instance_url = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if object is not None:
            self.object = object
        if account is not None:
            self.account = account
        if customer is not None:
            self.customer = customer
        if metadata is not None:
            self.metadata = metadata
        if instance_url is not None:
            self.instance_url = instance_url

    @property
    def id(self):
        """Gets the id of this ExternalAccount.  # noqa: E501


        :return: The id of this ExternalAccount.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this ExternalAccount.


        :param id: The id of this ExternalAccount.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def object(self):
        """Gets the object of this ExternalAccount.  # noqa: E501


        :return: The object of this ExternalAccount.  # noqa: E501
        :rtype: str
        """
        return self._object

    @object.setter
    def object(self, object):
        """Sets the object of this ExternalAccount.


        :param object: The object of this ExternalAccount.  # noqa: E501
        :type: str
        """

        self._object = object

    @property
    def account(self):
        """Gets the account of this ExternalAccount.  # noqa: E501


        :return: The account of this ExternalAccount.  # noqa: E501
        :rtype: str
        """
        return self._account

    @account.setter
    def account(self, account):
        """Sets the account of this ExternalAccount.


        :param account: The account of this ExternalAccount.  # noqa: E501
        :type: str
        """

        self._account = account

    @property
    def customer(self):
        """Gets the customer of this ExternalAccount.  # noqa: E501


        :return: The customer of this ExternalAccount.  # noqa: E501
        :rtype: str
        """
        return self._customer

    @customer.setter
    def customer(self, customer):
        """Sets the customer of this ExternalAccount.


        :param customer: The customer of this ExternalAccount.  # noqa: E501
        :type: str
        """

        self._customer = customer

    @property
    def metadata(self):
        """Gets the metadata of this ExternalAccount.  # noqa: E501


        :return: The metadata of this ExternalAccount.  # noqa: E501
        :rtype: dict(str, str)
        """
        return self._metadata

    @metadata.setter
    def metadata(self, metadata):
        """Sets the metadata of this ExternalAccount.


        :param metadata: The metadata of this ExternalAccount.  # noqa: E501
        :type: dict(str, str)
        """

        self._metadata = metadata

    @property
    def instance_url(self):
        """Gets the instance_url of this ExternalAccount.  # noqa: E501


        :return: The instance_url of this ExternalAccount.  # noqa: E501
        :rtype: str
        """
        return self._instance_url

    @instance_url.setter
    def instance_url(self, instance_url):
        """Sets the instance_url of this ExternalAccount.


        :param instance_url: The instance_url of this ExternalAccount.  # noqa: E501
        :type: str
        """

        self._instance_url = instance_url

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
        if not isinstance(other, ExternalAccount):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

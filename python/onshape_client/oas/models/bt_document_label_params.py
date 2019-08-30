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


class BTDocumentLabelParams(object):
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
        'parent_label_id': 'str',
        'owner_id': 'str',
        'document_ids': 'list[str]',
        'name': 'str'
    }

    attribute_map = {
        'parent_label_id': 'parentLabelId',
        'owner_id': 'ownerId',
        'document_ids': 'documentIds',
        'name': 'name'
    }

    def __init__(self, parent_label_id=None, owner_id=None, document_ids=None, name=None):  # noqa: E501
        """BTDocumentLabelParams - a model defined in OpenAPI"""  # noqa: E501

        self._parent_label_id = None
        self._owner_id = None
        self._document_ids = None
        self._name = None
        self.discriminator = None

        if parent_label_id is not None:
            self.parent_label_id = parent_label_id
        if owner_id is not None:
            self.owner_id = owner_id
        if document_ids is not None:
            self.document_ids = document_ids
        if name is not None:
            self.name = name

    @property
    def parent_label_id(self):
        """Gets the parent_label_id of this BTDocumentLabelParams.  # noqa: E501


        :return: The parent_label_id of this BTDocumentLabelParams.  # noqa: E501
        :rtype: str
        """
        return self._parent_label_id

    @parent_label_id.setter
    def parent_label_id(self, parent_label_id):
        """Sets the parent_label_id of this BTDocumentLabelParams.


        :param parent_label_id: The parent_label_id of this BTDocumentLabelParams.  # noqa: E501
        :type: str
        """

        self._parent_label_id = parent_label_id

    @property
    def owner_id(self):
        """Gets the owner_id of this BTDocumentLabelParams.  # noqa: E501


        :return: The owner_id of this BTDocumentLabelParams.  # noqa: E501
        :rtype: str
        """
        return self._owner_id

    @owner_id.setter
    def owner_id(self, owner_id):
        """Sets the owner_id of this BTDocumentLabelParams.


        :param owner_id: The owner_id of this BTDocumentLabelParams.  # noqa: E501
        :type: str
        """

        self._owner_id = owner_id

    @property
    def document_ids(self):
        """Gets the document_ids of this BTDocumentLabelParams.  # noqa: E501


        :return: The document_ids of this BTDocumentLabelParams.  # noqa: E501
        :rtype: list[str]
        """
        return self._document_ids

    @document_ids.setter
    def document_ids(self, document_ids):
        """Sets the document_ids of this BTDocumentLabelParams.


        :param document_ids: The document_ids of this BTDocumentLabelParams.  # noqa: E501
        :type: list[str]
        """

        self._document_ids = document_ids

    @property
    def name(self):
        """Gets the name of this BTDocumentLabelParams.  # noqa: E501


        :return: The name of this BTDocumentLabelParams.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTDocumentLabelParams.


        :param name: The name of this BTDocumentLabelParams.  # noqa: E501
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
        if not isinstance(other, BTDocumentLabelParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

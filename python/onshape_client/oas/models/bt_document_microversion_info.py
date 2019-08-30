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


class BTDocumentMicroversionInfo(object):
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
        'current_configuration': 'str',
        'workspace_id': 'str',
        'document_id': 'str',
        'microversion_id': 'str',
        'element_type': 'str'
    }

    attribute_map = {
        'current_configuration': 'currentConfiguration',
        'workspace_id': 'workspaceId',
        'document_id': 'documentId',
        'microversion_id': 'microversionId',
        'element_type': 'elementType'
    }

    def __init__(self, current_configuration=None, workspace_id=None, document_id=None, microversion_id=None, element_type=None):  # noqa: E501
        """BTDocumentMicroversionInfo - a model defined in OpenAPI"""  # noqa: E501

        self._current_configuration = None
        self._workspace_id = None
        self._document_id = None
        self._microversion_id = None
        self._element_type = None
        self.discriminator = None

        if current_configuration is not None:
            self.current_configuration = current_configuration
        if workspace_id is not None:
            self.workspace_id = workspace_id
        if document_id is not None:
            self.document_id = document_id
        if microversion_id is not None:
            self.microversion_id = microversion_id
        if element_type is not None:
            self.element_type = element_type

    @property
    def current_configuration(self):
        """Gets the current_configuration of this BTDocumentMicroversionInfo.  # noqa: E501


        :return: The current_configuration of this BTDocumentMicroversionInfo.  # noqa: E501
        :rtype: str
        """
        return self._current_configuration

    @current_configuration.setter
    def current_configuration(self, current_configuration):
        """Sets the current_configuration of this BTDocumentMicroversionInfo.


        :param current_configuration: The current_configuration of this BTDocumentMicroversionInfo.  # noqa: E501
        :type: str
        """

        self._current_configuration = current_configuration

    @property
    def workspace_id(self):
        """Gets the workspace_id of this BTDocumentMicroversionInfo.  # noqa: E501


        :return: The workspace_id of this BTDocumentMicroversionInfo.  # noqa: E501
        :rtype: str
        """
        return self._workspace_id

    @workspace_id.setter
    def workspace_id(self, workspace_id):
        """Sets the workspace_id of this BTDocumentMicroversionInfo.


        :param workspace_id: The workspace_id of this BTDocumentMicroversionInfo.  # noqa: E501
        :type: str
        """

        self._workspace_id = workspace_id

    @property
    def document_id(self):
        """Gets the document_id of this BTDocumentMicroversionInfo.  # noqa: E501


        :return: The document_id of this BTDocumentMicroversionInfo.  # noqa: E501
        :rtype: str
        """
        return self._document_id

    @document_id.setter
    def document_id(self, document_id):
        """Sets the document_id of this BTDocumentMicroversionInfo.


        :param document_id: The document_id of this BTDocumentMicroversionInfo.  # noqa: E501
        :type: str
        """

        self._document_id = document_id

    @property
    def microversion_id(self):
        """Gets the microversion_id of this BTDocumentMicroversionInfo.  # noqa: E501


        :return: The microversion_id of this BTDocumentMicroversionInfo.  # noqa: E501
        :rtype: str
        """
        return self._microversion_id

    @microversion_id.setter
    def microversion_id(self, microversion_id):
        """Sets the microversion_id of this BTDocumentMicroversionInfo.


        :param microversion_id: The microversion_id of this BTDocumentMicroversionInfo.  # noqa: E501
        :type: str
        """

        self._microversion_id = microversion_id

    @property
    def element_type(self):
        """Gets the element_type of this BTDocumentMicroversionInfo.  # noqa: E501


        :return: The element_type of this BTDocumentMicroversionInfo.  # noqa: E501
        :rtype: str
        """
        return self._element_type

    @element_type.setter
    def element_type(self, element_type):
        """Sets the element_type of this BTDocumentMicroversionInfo.


        :param element_type: The element_type of this BTDocumentMicroversionInfo.  # noqa: E501
        :type: str
        """

        self._element_type = element_type

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
        if not isinstance(other, BTDocumentMicroversionInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

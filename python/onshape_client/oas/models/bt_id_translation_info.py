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


class BTIdTranslationInfo(object):
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
        'element_id': 'str',
        'document_id': 'str',
        'source_document_microversion': 'str',
        'ids': 'list[BTIdTranslationResultInfo]',
        'target_document_microversion': 'str'
    }

    attribute_map = {
        'element_id': 'elementId',
        'document_id': 'documentId',
        'source_document_microversion': 'sourceDocumentMicroversion',
        'ids': 'ids',
        'target_document_microversion': 'targetDocumentMicroversion'
    }

    def __init__(self, element_id=None, document_id=None, source_document_microversion=None, ids=None, target_document_microversion=None):  # noqa: E501
        """BTIdTranslationInfo - a model defined in OpenAPI"""  # noqa: E501

        self._element_id = None
        self._document_id = None
        self._source_document_microversion = None
        self._ids = None
        self._target_document_microversion = None
        self.discriminator = None

        if element_id is not None:
            self.element_id = element_id
        if document_id is not None:
            self.document_id = document_id
        if source_document_microversion is not None:
            self.source_document_microversion = source_document_microversion
        if ids is not None:
            self.ids = ids
        if target_document_microversion is not None:
            self.target_document_microversion = target_document_microversion

    @property
    def element_id(self):
        """Gets the element_id of this BTIdTranslationInfo.  # noqa: E501


        :return: The element_id of this BTIdTranslationInfo.  # noqa: E501
        :rtype: str
        """
        return self._element_id

    @element_id.setter
    def element_id(self, element_id):
        """Sets the element_id of this BTIdTranslationInfo.


        :param element_id: The element_id of this BTIdTranslationInfo.  # noqa: E501
        :type: str
        """

        self._element_id = element_id

    @property
    def document_id(self):
        """Gets the document_id of this BTIdTranslationInfo.  # noqa: E501


        :return: The document_id of this BTIdTranslationInfo.  # noqa: E501
        :rtype: str
        """
        return self._document_id

    @document_id.setter
    def document_id(self, document_id):
        """Sets the document_id of this BTIdTranslationInfo.


        :param document_id: The document_id of this BTIdTranslationInfo.  # noqa: E501
        :type: str
        """

        self._document_id = document_id

    @property
    def source_document_microversion(self):
        """Gets the source_document_microversion of this BTIdTranslationInfo.  # noqa: E501


        :return: The source_document_microversion of this BTIdTranslationInfo.  # noqa: E501
        :rtype: str
        """
        return self._source_document_microversion

    @source_document_microversion.setter
    def source_document_microversion(self, source_document_microversion):
        """Sets the source_document_microversion of this BTIdTranslationInfo.


        :param source_document_microversion: The source_document_microversion of this BTIdTranslationInfo.  # noqa: E501
        :type: str
        """

        self._source_document_microversion = source_document_microversion

    @property
    def ids(self):
        """Gets the ids of this BTIdTranslationInfo.  # noqa: E501


        :return: The ids of this BTIdTranslationInfo.  # noqa: E501
        :rtype: list[BTIdTranslationResultInfo]
        """
        return self._ids

    @ids.setter
    def ids(self, ids):
        """Sets the ids of this BTIdTranslationInfo.


        :param ids: The ids of this BTIdTranslationInfo.  # noqa: E501
        :type: list[BTIdTranslationResultInfo]
        """

        self._ids = ids

    @property
    def target_document_microversion(self):
        """Gets the target_document_microversion of this BTIdTranslationInfo.  # noqa: E501


        :return: The target_document_microversion of this BTIdTranslationInfo.  # noqa: E501
        :rtype: str
        """
        return self._target_document_microversion

    @target_document_microversion.setter
    def target_document_microversion(self, target_document_microversion):
        """Sets the target_document_microversion of this BTIdTranslationInfo.


        :param target_document_microversion: The target_document_microversion of this BTIdTranslationInfo.  # noqa: E501
        :type: str
        """

        self._target_document_microversion = target_document_microversion

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
        if not isinstance(other, BTIdTranslationInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

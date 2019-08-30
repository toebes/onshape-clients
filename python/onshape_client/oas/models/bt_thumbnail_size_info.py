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


class BTThumbnailSizeInfo(object):
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
        'view_orientation': 'str',
        'render_mode': 'str',
        'href': 'str',
        'unique_id': 'str',
        'media_type': 'str',
        'sheet_name': 'str',
        'size': 'str'
    }

    attribute_map = {
        'view_orientation': 'viewOrientation',
        'render_mode': 'renderMode',
        'href': 'href',
        'unique_id': 'uniqueId',
        'media_type': 'mediaType',
        'sheet_name': 'sheetName',
        'size': 'size'
    }

    def __init__(self, view_orientation=None, render_mode=None, href=None, unique_id=None, media_type=None, sheet_name=None, size=None):  # noqa: E501
        """BTThumbnailSizeInfo - a model defined in OpenAPI"""  # noqa: E501

        self._view_orientation = None
        self._render_mode = None
        self._href = None
        self._unique_id = None
        self._media_type = None
        self._sheet_name = None
        self._size = None
        self.discriminator = None

        if view_orientation is not None:
            self.view_orientation = view_orientation
        if render_mode is not None:
            self.render_mode = render_mode
        if href is not None:
            self.href = href
        if unique_id is not None:
            self.unique_id = unique_id
        if media_type is not None:
            self.media_type = media_type
        if sheet_name is not None:
            self.sheet_name = sheet_name
        if size is not None:
            self.size = size

    @property
    def view_orientation(self):
        """Gets the view_orientation of this BTThumbnailSizeInfo.  # noqa: E501


        :return: The view_orientation of this BTThumbnailSizeInfo.  # noqa: E501
        :rtype: str
        """
        return self._view_orientation

    @view_orientation.setter
    def view_orientation(self, view_orientation):
        """Sets the view_orientation of this BTThumbnailSizeInfo.


        :param view_orientation: The view_orientation of this BTThumbnailSizeInfo.  # noqa: E501
        :type: str
        """

        self._view_orientation = view_orientation

    @property
    def render_mode(self):
        """Gets the render_mode of this BTThumbnailSizeInfo.  # noqa: E501


        :return: The render_mode of this BTThumbnailSizeInfo.  # noqa: E501
        :rtype: str
        """
        return self._render_mode

    @render_mode.setter
    def render_mode(self, render_mode):
        """Sets the render_mode of this BTThumbnailSizeInfo.


        :param render_mode: The render_mode of this BTThumbnailSizeInfo.  # noqa: E501
        :type: str
        """

        self._render_mode = render_mode

    @property
    def href(self):
        """Gets the href of this BTThumbnailSizeInfo.  # noqa: E501


        :return: The href of this BTThumbnailSizeInfo.  # noqa: E501
        :rtype: str
        """
        return self._href

    @href.setter
    def href(self, href):
        """Sets the href of this BTThumbnailSizeInfo.


        :param href: The href of this BTThumbnailSizeInfo.  # noqa: E501
        :type: str
        """

        self._href = href

    @property
    def unique_id(self):
        """Gets the unique_id of this BTThumbnailSizeInfo.  # noqa: E501


        :return: The unique_id of this BTThumbnailSizeInfo.  # noqa: E501
        :rtype: str
        """
        return self._unique_id

    @unique_id.setter
    def unique_id(self, unique_id):
        """Sets the unique_id of this BTThumbnailSizeInfo.


        :param unique_id: The unique_id of this BTThumbnailSizeInfo.  # noqa: E501
        :type: str
        """

        self._unique_id = unique_id

    @property
    def media_type(self):
        """Gets the media_type of this BTThumbnailSizeInfo.  # noqa: E501


        :return: The media_type of this BTThumbnailSizeInfo.  # noqa: E501
        :rtype: str
        """
        return self._media_type

    @media_type.setter
    def media_type(self, media_type):
        """Sets the media_type of this BTThumbnailSizeInfo.


        :param media_type: The media_type of this BTThumbnailSizeInfo.  # noqa: E501
        :type: str
        """

        self._media_type = media_type

    @property
    def sheet_name(self):
        """Gets the sheet_name of this BTThumbnailSizeInfo.  # noqa: E501


        :return: The sheet_name of this BTThumbnailSizeInfo.  # noqa: E501
        :rtype: str
        """
        return self._sheet_name

    @sheet_name.setter
    def sheet_name(self, sheet_name):
        """Sets the sheet_name of this BTThumbnailSizeInfo.


        :param sheet_name: The sheet_name of this BTThumbnailSizeInfo.  # noqa: E501
        :type: str
        """

        self._sheet_name = sheet_name

    @property
    def size(self):
        """Gets the size of this BTThumbnailSizeInfo.  # noqa: E501


        :return: The size of this BTThumbnailSizeInfo.  # noqa: E501
        :rtype: str
        """
        return self._size

    @size.setter
    def size(self, size):
        """Sets the size of this BTThumbnailSizeInfo.


        :param size: The size of this BTThumbnailSizeInfo.  # noqa: E501
        :type: str
        """

        self._size = size

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
        if not isinstance(other, BTThumbnailSizeInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

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


class BTWorkspaceInfo(object):
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
        'is_read_only': 'bool',
        'can_delete': 'bool',
        'creator': 'BTUserBasicSummaryInfo',
        'description': 'str',
        'modified_at': 'datetime',
        'created_at': 'datetime',
        'last_modifier': 'BTUserBasicSummaryInfo',
        'document_id': 'str',
        'thumbnail': 'BTThumbnailInfo',
        'microversion': 'str',
        'parents': 'list[BTVersionInfo]',
        'override_date': 'datetime',
        'type': 'str',
        'parent': 'str',
        'id': 'str',
        'href': 'str',
        'view_ref': 'str',
        'name': 'str'
    }

    attribute_map = {
        'is_read_only': 'isReadOnly',
        'can_delete': 'canDelete',
        'creator': 'creator',
        'description': 'description',
        'modified_at': 'modifiedAt',
        'created_at': 'createdAt',
        'last_modifier': 'lastModifier',
        'document_id': 'documentId',
        'thumbnail': 'thumbnail',
        'microversion': 'microversion',
        'parents': 'parents',
        'override_date': 'overrideDate',
        'type': 'type',
        'parent': 'parent',
        'id': 'id',
        'href': 'href',
        'view_ref': 'viewRef',
        'name': 'name'
    }

    def __init__(self, is_read_only=None, can_delete=None, creator=None, description=None, modified_at=None, created_at=None, last_modifier=None, document_id=None, thumbnail=None, microversion=None, parents=None, override_date=None, type=None, parent=None, id=None, href=None, view_ref=None, name=None):  # noqa: E501
        """BTWorkspaceInfo - a model defined in OpenAPI"""  # noqa: E501

        self._is_read_only = None
        self._can_delete = None
        self._creator = None
        self._description = None
        self._modified_at = None
        self._created_at = None
        self._last_modifier = None
        self._document_id = None
        self._thumbnail = None
        self._microversion = None
        self._parents = None
        self._override_date = None
        self._type = None
        self._parent = None
        self._id = None
        self._href = None
        self._view_ref = None
        self._name = None
        self.discriminator = None

        if is_read_only is not None:
            self.is_read_only = is_read_only
        if can_delete is not None:
            self.can_delete = can_delete
        if creator is not None:
            self.creator = creator
        if description is not None:
            self.description = description
        if modified_at is not None:
            self.modified_at = modified_at
        if created_at is not None:
            self.created_at = created_at
        if last_modifier is not None:
            self.last_modifier = last_modifier
        if document_id is not None:
            self.document_id = document_id
        if thumbnail is not None:
            self.thumbnail = thumbnail
        if microversion is not None:
            self.microversion = microversion
        if parents is not None:
            self.parents = parents
        if override_date is not None:
            self.override_date = override_date
        if type is not None:
            self.type = type
        if parent is not None:
            self.parent = parent
        if id is not None:
            self.id = id
        if href is not None:
            self.href = href
        if view_ref is not None:
            self.view_ref = view_ref
        if name is not None:
            self.name = name

    @property
    def is_read_only(self):
        """Gets the is_read_only of this BTWorkspaceInfo.  # noqa: E501


        :return: The is_read_only of this BTWorkspaceInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_read_only

    @is_read_only.setter
    def is_read_only(self, is_read_only):
        """Sets the is_read_only of this BTWorkspaceInfo.


        :param is_read_only: The is_read_only of this BTWorkspaceInfo.  # noqa: E501
        :type: bool
        """

        self._is_read_only = is_read_only

    @property
    def can_delete(self):
        """Gets the can_delete of this BTWorkspaceInfo.  # noqa: E501


        :return: The can_delete of this BTWorkspaceInfo.  # noqa: E501
        :rtype: bool
        """
        return self._can_delete

    @can_delete.setter
    def can_delete(self, can_delete):
        """Sets the can_delete of this BTWorkspaceInfo.


        :param can_delete: The can_delete of this BTWorkspaceInfo.  # noqa: E501
        :type: bool
        """

        self._can_delete = can_delete

    @property
    def creator(self):
        """Gets the creator of this BTWorkspaceInfo.  # noqa: E501


        :return: The creator of this BTWorkspaceInfo.  # noqa: E501
        :rtype: BTUserBasicSummaryInfo
        """
        return self._creator

    @creator.setter
    def creator(self, creator):
        """Sets the creator of this BTWorkspaceInfo.


        :param creator: The creator of this BTWorkspaceInfo.  # noqa: E501
        :type: BTUserBasicSummaryInfo
        """

        self._creator = creator

    @property
    def description(self):
        """Gets the description of this BTWorkspaceInfo.  # noqa: E501


        :return: The description of this BTWorkspaceInfo.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this BTWorkspaceInfo.


        :param description: The description of this BTWorkspaceInfo.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def modified_at(self):
        """Gets the modified_at of this BTWorkspaceInfo.  # noqa: E501


        :return: The modified_at of this BTWorkspaceInfo.  # noqa: E501
        :rtype: datetime
        """
        return self._modified_at

    @modified_at.setter
    def modified_at(self, modified_at):
        """Sets the modified_at of this BTWorkspaceInfo.


        :param modified_at: The modified_at of this BTWorkspaceInfo.  # noqa: E501
        :type: datetime
        """

        self._modified_at = modified_at

    @property
    def created_at(self):
        """Gets the created_at of this BTWorkspaceInfo.  # noqa: E501


        :return: The created_at of this BTWorkspaceInfo.  # noqa: E501
        :rtype: datetime
        """
        return self._created_at

    @created_at.setter
    def created_at(self, created_at):
        """Sets the created_at of this BTWorkspaceInfo.


        :param created_at: The created_at of this BTWorkspaceInfo.  # noqa: E501
        :type: datetime
        """

        self._created_at = created_at

    @property
    def last_modifier(self):
        """Gets the last_modifier of this BTWorkspaceInfo.  # noqa: E501


        :return: The last_modifier of this BTWorkspaceInfo.  # noqa: E501
        :rtype: BTUserBasicSummaryInfo
        """
        return self._last_modifier

    @last_modifier.setter
    def last_modifier(self, last_modifier):
        """Sets the last_modifier of this BTWorkspaceInfo.


        :param last_modifier: The last_modifier of this BTWorkspaceInfo.  # noqa: E501
        :type: BTUserBasicSummaryInfo
        """

        self._last_modifier = last_modifier

    @property
    def document_id(self):
        """Gets the document_id of this BTWorkspaceInfo.  # noqa: E501


        :return: The document_id of this BTWorkspaceInfo.  # noqa: E501
        :rtype: str
        """
        return self._document_id

    @document_id.setter
    def document_id(self, document_id):
        """Sets the document_id of this BTWorkspaceInfo.


        :param document_id: The document_id of this BTWorkspaceInfo.  # noqa: E501
        :type: str
        """

        self._document_id = document_id

    @property
    def thumbnail(self):
        """Gets the thumbnail of this BTWorkspaceInfo.  # noqa: E501


        :return: The thumbnail of this BTWorkspaceInfo.  # noqa: E501
        :rtype: BTThumbnailInfo
        """
        return self._thumbnail

    @thumbnail.setter
    def thumbnail(self, thumbnail):
        """Sets the thumbnail of this BTWorkspaceInfo.


        :param thumbnail: The thumbnail of this BTWorkspaceInfo.  # noqa: E501
        :type: BTThumbnailInfo
        """

        self._thumbnail = thumbnail

    @property
    def microversion(self):
        """Gets the microversion of this BTWorkspaceInfo.  # noqa: E501


        :return: The microversion of this BTWorkspaceInfo.  # noqa: E501
        :rtype: str
        """
        return self._microversion

    @microversion.setter
    def microversion(self, microversion):
        """Sets the microversion of this BTWorkspaceInfo.


        :param microversion: The microversion of this BTWorkspaceInfo.  # noqa: E501
        :type: str
        """

        self._microversion = microversion

    @property
    def parents(self):
        """Gets the parents of this BTWorkspaceInfo.  # noqa: E501


        :return: The parents of this BTWorkspaceInfo.  # noqa: E501
        :rtype: list[BTVersionInfo]
        """
        return self._parents

    @parents.setter
    def parents(self, parents):
        """Sets the parents of this BTWorkspaceInfo.


        :param parents: The parents of this BTWorkspaceInfo.  # noqa: E501
        :type: list[BTVersionInfo]
        """

        self._parents = parents

    @property
    def override_date(self):
        """Gets the override_date of this BTWorkspaceInfo.  # noqa: E501


        :return: The override_date of this BTWorkspaceInfo.  # noqa: E501
        :rtype: datetime
        """
        return self._override_date

    @override_date.setter
    def override_date(self, override_date):
        """Sets the override_date of this BTWorkspaceInfo.


        :param override_date: The override_date of this BTWorkspaceInfo.  # noqa: E501
        :type: datetime
        """

        self._override_date = override_date

    @property
    def type(self):
        """Gets the type of this BTWorkspaceInfo.  # noqa: E501


        :return: The type of this BTWorkspaceInfo.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this BTWorkspaceInfo.


        :param type: The type of this BTWorkspaceInfo.  # noqa: E501
        :type: str
        """

        self._type = type

    @property
    def parent(self):
        """Gets the parent of this BTWorkspaceInfo.  # noqa: E501


        :return: The parent of this BTWorkspaceInfo.  # noqa: E501
        :rtype: str
        """
        return self._parent

    @parent.setter
    def parent(self, parent):
        """Sets the parent of this BTWorkspaceInfo.


        :param parent: The parent of this BTWorkspaceInfo.  # noqa: E501
        :type: str
        """

        self._parent = parent

    @property
    def id(self):
        """Gets the id of this BTWorkspaceInfo.  # noqa: E501


        :return: The id of this BTWorkspaceInfo.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTWorkspaceInfo.


        :param id: The id of this BTWorkspaceInfo.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def href(self):
        """Gets the href of this BTWorkspaceInfo.  # noqa: E501


        :return: The href of this BTWorkspaceInfo.  # noqa: E501
        :rtype: str
        """
        return self._href

    @href.setter
    def href(self, href):
        """Sets the href of this BTWorkspaceInfo.


        :param href: The href of this BTWorkspaceInfo.  # noqa: E501
        :type: str
        """

        self._href = href

    @property
    def view_ref(self):
        """Gets the view_ref of this BTWorkspaceInfo.  # noqa: E501


        :return: The view_ref of this BTWorkspaceInfo.  # noqa: E501
        :rtype: str
        """
        return self._view_ref

    @view_ref.setter
    def view_ref(self, view_ref):
        """Sets the view_ref of this BTWorkspaceInfo.


        :param view_ref: The view_ref of this BTWorkspaceInfo.  # noqa: E501
        :type: str
        """

        self._view_ref = view_ref

    @property
    def name(self):
        """Gets the name of this BTWorkspaceInfo.  # noqa: E501


        :return: The name of this BTWorkspaceInfo.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTWorkspaceInfo.


        :param name: The name of this BTWorkspaceInfo.  # noqa: E501
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
        if not isinstance(other, BTWorkspaceInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

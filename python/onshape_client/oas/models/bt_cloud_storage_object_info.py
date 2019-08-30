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


class BTCloudStorageObjectInfo(object):
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
        'cloud_storage_account_id': 'str',
        'thumbnail_info': 'BTThumbnailInfo',
        'cloud_storage_provider': 'int',
        'parent_id': 'str',
        'cloud_storage_object_id': 'str',
        'size_bytes': 'int',
        'web_view_link': 'str',
        'icon_link': 'str',
        'mime_type': 'str',
        'created_by_id': 'str',
        'modified_by_id': 'str',
        'description': 'str',
        'tree_href': 'str',
        'is_mutable': 'bool',
        'resource_type': 'str',
        'modified_at': 'datetime',
        'created_at': 'datetime',
        'created_by': 'BTUserBasicSummaryInfo',
        'modified_by': 'BTUserBasicSummaryInfo',
        'project_id': 'str',
        'can_move': 'bool',
        'is_container': 'bool',
        'is_enterprise_owned': 'bool',
        'has_pending_owner': 'bool',
        'owner': 'BTOwnerInfo',
        'id': 'str',
        'href': 'str',
        'view_ref': 'str',
        'name': 'str'
    }

    attribute_map = {
        'cloud_storage_account_id': 'cloudStorageAccountId',
        'thumbnail_info': 'thumbnailInfo',
        'cloud_storage_provider': 'cloudStorageProvider',
        'parent_id': 'parentId',
        'cloud_storage_object_id': 'cloudStorageObjectId',
        'size_bytes': 'sizeBytes',
        'web_view_link': 'webViewLink',
        'icon_link': 'iconLink',
        'mime_type': 'mimeType',
        'created_by_id': 'createdById',
        'modified_by_id': 'modifiedById',
        'description': 'description',
        'tree_href': 'treeHref',
        'is_mutable': 'isMutable',
        'resource_type': 'resourceType',
        'modified_at': 'modifiedAt',
        'created_at': 'createdAt',
        'created_by': 'createdBy',
        'modified_by': 'modifiedBy',
        'project_id': 'projectId',
        'can_move': 'canMove',
        'is_container': 'isContainer',
        'is_enterprise_owned': 'isEnterpriseOwned',
        'has_pending_owner': 'hasPendingOwner',
        'owner': 'owner',
        'id': 'id',
        'href': 'href',
        'view_ref': 'viewRef',
        'name': 'name'
    }

    def __init__(self, cloud_storage_account_id=None, thumbnail_info=None, cloud_storage_provider=None, parent_id=None, cloud_storage_object_id=None, size_bytes=None, web_view_link=None, icon_link=None, mime_type=None, created_by_id=None, modified_by_id=None, description=None, tree_href=None, is_mutable=None, resource_type=None, modified_at=None, created_at=None, created_by=None, modified_by=None, project_id=None, can_move=None, is_container=None, is_enterprise_owned=None, has_pending_owner=None, owner=None, id=None, href=None, view_ref=None, name=None):  # noqa: E501
        """BTCloudStorageObjectInfo - a model defined in OpenAPI"""  # noqa: E501

        self._cloud_storage_account_id = None
        self._thumbnail_info = None
        self._cloud_storage_provider = None
        self._parent_id = None
        self._cloud_storage_object_id = None
        self._size_bytes = None
        self._web_view_link = None
        self._icon_link = None
        self._mime_type = None
        self._created_by_id = None
        self._modified_by_id = None
        self._description = None
        self._tree_href = None
        self._is_mutable = None
        self._resource_type = None
        self._modified_at = None
        self._created_at = None
        self._created_by = None
        self._modified_by = None
        self._project_id = None
        self._can_move = None
        self._is_container = None
        self._is_enterprise_owned = None
        self._has_pending_owner = None
        self._owner = None
        self._id = None
        self._href = None
        self._view_ref = None
        self._name = None
        self.discriminator = None

        if cloud_storage_account_id is not None:
            self.cloud_storage_account_id = cloud_storage_account_id
        if thumbnail_info is not None:
            self.thumbnail_info = thumbnail_info
        if cloud_storage_provider is not None:
            self.cloud_storage_provider = cloud_storage_provider
        if parent_id is not None:
            self.parent_id = parent_id
        if cloud_storage_object_id is not None:
            self.cloud_storage_object_id = cloud_storage_object_id
        if size_bytes is not None:
            self.size_bytes = size_bytes
        if web_view_link is not None:
            self.web_view_link = web_view_link
        if icon_link is not None:
            self.icon_link = icon_link
        if mime_type is not None:
            self.mime_type = mime_type
        if created_by_id is not None:
            self.created_by_id = created_by_id
        if modified_by_id is not None:
            self.modified_by_id = modified_by_id
        if description is not None:
            self.description = description
        if tree_href is not None:
            self.tree_href = tree_href
        if is_mutable is not None:
            self.is_mutable = is_mutable
        if resource_type is not None:
            self.resource_type = resource_type
        if modified_at is not None:
            self.modified_at = modified_at
        if created_at is not None:
            self.created_at = created_at
        if created_by is not None:
            self.created_by = created_by
        if modified_by is not None:
            self.modified_by = modified_by
        if project_id is not None:
            self.project_id = project_id
        if can_move is not None:
            self.can_move = can_move
        if is_container is not None:
            self.is_container = is_container
        if is_enterprise_owned is not None:
            self.is_enterprise_owned = is_enterprise_owned
        if has_pending_owner is not None:
            self.has_pending_owner = has_pending_owner
        if owner is not None:
            self.owner = owner
        if id is not None:
            self.id = id
        if href is not None:
            self.href = href
        if view_ref is not None:
            self.view_ref = view_ref
        if name is not None:
            self.name = name

    @property
    def cloud_storage_account_id(self):
        """Gets the cloud_storage_account_id of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The cloud_storage_account_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._cloud_storage_account_id

    @cloud_storage_account_id.setter
    def cloud_storage_account_id(self, cloud_storage_account_id):
        """Sets the cloud_storage_account_id of this BTCloudStorageObjectInfo.


        :param cloud_storage_account_id: The cloud_storage_account_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._cloud_storage_account_id = cloud_storage_account_id

    @property
    def thumbnail_info(self):
        """Gets the thumbnail_info of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The thumbnail_info of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: BTThumbnailInfo
        """
        return self._thumbnail_info

    @thumbnail_info.setter
    def thumbnail_info(self, thumbnail_info):
        """Sets the thumbnail_info of this BTCloudStorageObjectInfo.


        :param thumbnail_info: The thumbnail_info of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: BTThumbnailInfo
        """

        self._thumbnail_info = thumbnail_info

    @property
    def cloud_storage_provider(self):
        """Gets the cloud_storage_provider of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The cloud_storage_provider of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: int
        """
        return self._cloud_storage_provider

    @cloud_storage_provider.setter
    def cloud_storage_provider(self, cloud_storage_provider):
        """Sets the cloud_storage_provider of this BTCloudStorageObjectInfo.


        :param cloud_storage_provider: The cloud_storage_provider of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: int
        """

        self._cloud_storage_provider = cloud_storage_provider

    @property
    def parent_id(self):
        """Gets the parent_id of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The parent_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._parent_id

    @parent_id.setter
    def parent_id(self, parent_id):
        """Sets the parent_id of this BTCloudStorageObjectInfo.


        :param parent_id: The parent_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._parent_id = parent_id

    @property
    def cloud_storage_object_id(self):
        """Gets the cloud_storage_object_id of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The cloud_storage_object_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._cloud_storage_object_id

    @cloud_storage_object_id.setter
    def cloud_storage_object_id(self, cloud_storage_object_id):
        """Sets the cloud_storage_object_id of this BTCloudStorageObjectInfo.


        :param cloud_storage_object_id: The cloud_storage_object_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._cloud_storage_object_id = cloud_storage_object_id

    @property
    def size_bytes(self):
        """Gets the size_bytes of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The size_bytes of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: int
        """
        return self._size_bytes

    @size_bytes.setter
    def size_bytes(self, size_bytes):
        """Sets the size_bytes of this BTCloudStorageObjectInfo.


        :param size_bytes: The size_bytes of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: int
        """

        self._size_bytes = size_bytes

    @property
    def web_view_link(self):
        """Gets the web_view_link of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The web_view_link of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._web_view_link

    @web_view_link.setter
    def web_view_link(self, web_view_link):
        """Sets the web_view_link of this BTCloudStorageObjectInfo.


        :param web_view_link: The web_view_link of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._web_view_link = web_view_link

    @property
    def icon_link(self):
        """Gets the icon_link of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The icon_link of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._icon_link

    @icon_link.setter
    def icon_link(self, icon_link):
        """Sets the icon_link of this BTCloudStorageObjectInfo.


        :param icon_link: The icon_link of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._icon_link = icon_link

    @property
    def mime_type(self):
        """Gets the mime_type of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The mime_type of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._mime_type

    @mime_type.setter
    def mime_type(self, mime_type):
        """Sets the mime_type of this BTCloudStorageObjectInfo.


        :param mime_type: The mime_type of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._mime_type = mime_type

    @property
    def created_by_id(self):
        """Gets the created_by_id of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The created_by_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._created_by_id

    @created_by_id.setter
    def created_by_id(self, created_by_id):
        """Sets the created_by_id of this BTCloudStorageObjectInfo.


        :param created_by_id: The created_by_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._created_by_id = created_by_id

    @property
    def modified_by_id(self):
        """Gets the modified_by_id of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The modified_by_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._modified_by_id

    @modified_by_id.setter
    def modified_by_id(self, modified_by_id):
        """Sets the modified_by_id of this BTCloudStorageObjectInfo.


        :param modified_by_id: The modified_by_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._modified_by_id = modified_by_id

    @property
    def description(self):
        """Gets the description of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The description of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this BTCloudStorageObjectInfo.


        :param description: The description of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def tree_href(self):
        """Gets the tree_href of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The tree_href of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._tree_href

    @tree_href.setter
    def tree_href(self, tree_href):
        """Sets the tree_href of this BTCloudStorageObjectInfo.


        :param tree_href: The tree_href of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._tree_href = tree_href

    @property
    def is_mutable(self):
        """Gets the is_mutable of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The is_mutable of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_mutable

    @is_mutable.setter
    def is_mutable(self, is_mutable):
        """Sets the is_mutable of this BTCloudStorageObjectInfo.


        :param is_mutable: The is_mutable of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: bool
        """

        self._is_mutable = is_mutable

    @property
    def resource_type(self):
        """Gets the resource_type of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The resource_type of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._resource_type

    @resource_type.setter
    def resource_type(self, resource_type):
        """Sets the resource_type of this BTCloudStorageObjectInfo.


        :param resource_type: The resource_type of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._resource_type = resource_type

    @property
    def modified_at(self):
        """Gets the modified_at of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The modified_at of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: datetime
        """
        return self._modified_at

    @modified_at.setter
    def modified_at(self, modified_at):
        """Sets the modified_at of this BTCloudStorageObjectInfo.


        :param modified_at: The modified_at of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: datetime
        """

        self._modified_at = modified_at

    @property
    def created_at(self):
        """Gets the created_at of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The created_at of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: datetime
        """
        return self._created_at

    @created_at.setter
    def created_at(self, created_at):
        """Sets the created_at of this BTCloudStorageObjectInfo.


        :param created_at: The created_at of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: datetime
        """

        self._created_at = created_at

    @property
    def created_by(self):
        """Gets the created_by of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The created_by of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: BTUserBasicSummaryInfo
        """
        return self._created_by

    @created_by.setter
    def created_by(self, created_by):
        """Sets the created_by of this BTCloudStorageObjectInfo.


        :param created_by: The created_by of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: BTUserBasicSummaryInfo
        """

        self._created_by = created_by

    @property
    def modified_by(self):
        """Gets the modified_by of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The modified_by of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: BTUserBasicSummaryInfo
        """
        return self._modified_by

    @modified_by.setter
    def modified_by(self, modified_by):
        """Sets the modified_by of this BTCloudStorageObjectInfo.


        :param modified_by: The modified_by of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: BTUserBasicSummaryInfo
        """

        self._modified_by = modified_by

    @property
    def project_id(self):
        """Gets the project_id of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The project_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._project_id

    @project_id.setter
    def project_id(self, project_id):
        """Sets the project_id of this BTCloudStorageObjectInfo.


        :param project_id: The project_id of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._project_id = project_id

    @property
    def can_move(self):
        """Gets the can_move of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The can_move of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: bool
        """
        return self._can_move

    @can_move.setter
    def can_move(self, can_move):
        """Sets the can_move of this BTCloudStorageObjectInfo.


        :param can_move: The can_move of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: bool
        """

        self._can_move = can_move

    @property
    def is_container(self):
        """Gets the is_container of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The is_container of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_container

    @is_container.setter
    def is_container(self, is_container):
        """Sets the is_container of this BTCloudStorageObjectInfo.


        :param is_container: The is_container of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: bool
        """

        self._is_container = is_container

    @property
    def is_enterprise_owned(self):
        """Gets the is_enterprise_owned of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The is_enterprise_owned of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_enterprise_owned

    @is_enterprise_owned.setter
    def is_enterprise_owned(self, is_enterprise_owned):
        """Sets the is_enterprise_owned of this BTCloudStorageObjectInfo.


        :param is_enterprise_owned: The is_enterprise_owned of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: bool
        """

        self._is_enterprise_owned = is_enterprise_owned

    @property
    def has_pending_owner(self):
        """Gets the has_pending_owner of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The has_pending_owner of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: bool
        """
        return self._has_pending_owner

    @has_pending_owner.setter
    def has_pending_owner(self, has_pending_owner):
        """Sets the has_pending_owner of this BTCloudStorageObjectInfo.


        :param has_pending_owner: The has_pending_owner of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: bool
        """

        self._has_pending_owner = has_pending_owner

    @property
    def owner(self):
        """Gets the owner of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The owner of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: BTOwnerInfo
        """
        return self._owner

    @owner.setter
    def owner(self, owner):
        """Sets the owner of this BTCloudStorageObjectInfo.


        :param owner: The owner of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: BTOwnerInfo
        """

        self._owner = owner

    @property
    def id(self):
        """Gets the id of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The id of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTCloudStorageObjectInfo.


        :param id: The id of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def href(self):
        """Gets the href of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The href of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._href

    @href.setter
    def href(self, href):
        """Sets the href of this BTCloudStorageObjectInfo.


        :param href: The href of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._href = href

    @property
    def view_ref(self):
        """Gets the view_ref of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The view_ref of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._view_ref

    @view_ref.setter
    def view_ref(self, view_ref):
        """Sets the view_ref of this BTCloudStorageObjectInfo.


        :param view_ref: The view_ref of this BTCloudStorageObjectInfo.  # noqa: E501
        :type: str
        """

        self._view_ref = view_ref

    @property
    def name(self):
        """Gets the name of this BTCloudStorageObjectInfo.  # noqa: E501


        :return: The name of this BTCloudStorageObjectInfo.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTCloudStorageObjectInfo.


        :param name: The name of this BTCloudStorageObjectInfo.  # noqa: E501
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
        if not isinstance(other, BTCloudStorageObjectInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

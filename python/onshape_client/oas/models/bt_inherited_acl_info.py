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


class BTInheritedAclInfo(object):
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
        'object_name': 'str',
        'visibility': 'str',
        'shared_with_support': 'bool',
        'entries': 'list[BTAclEntryInfo]',
        'object_id': 'str',
        'object_type': 'int',
        'public': 'bool',
        'owner': 'BTOwnerInfo',
        'id': 'str',
        'href': 'str',
        'view_ref': 'str',
        'name': 'str'
    }

    attribute_map = {
        'object_name': 'objectName',
        'visibility': 'visibility',
        'shared_with_support': 'sharedWithSupport',
        'entries': 'entries',
        'object_id': 'objectId',
        'object_type': 'objectType',
        'public': 'public',
        'owner': 'owner',
        'id': 'id',
        'href': 'href',
        'view_ref': 'viewRef',
        'name': 'name'
    }

    def __init__(self, object_name=None, visibility=None, shared_with_support=None, entries=None, object_id=None, object_type=None, public=None, owner=None, id=None, href=None, view_ref=None, name=None):  # noqa: E501
        """BTInheritedAclInfo - a model defined in OpenAPI"""  # noqa: E501

        self._object_name = None
        self._visibility = None
        self._shared_with_support = None
        self._entries = None
        self._object_id = None
        self._object_type = None
        self._public = None
        self._owner = None
        self._id = None
        self._href = None
        self._view_ref = None
        self._name = None
        self.discriminator = None

        if object_name is not None:
            self.object_name = object_name
        if visibility is not None:
            self.visibility = visibility
        if shared_with_support is not None:
            self.shared_with_support = shared_with_support
        if entries is not None:
            self.entries = entries
        if object_id is not None:
            self.object_id = object_id
        if object_type is not None:
            self.object_type = object_type
        if public is not None:
            self.public = public
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
    def object_name(self):
        """Gets the object_name of this BTInheritedAclInfo.  # noqa: E501


        :return: The object_name of this BTInheritedAclInfo.  # noqa: E501
        :rtype: str
        """
        return self._object_name

    @object_name.setter
    def object_name(self, object_name):
        """Sets the object_name of this BTInheritedAclInfo.


        :param object_name: The object_name of this BTInheritedAclInfo.  # noqa: E501
        :type: str
        """

        self._object_name = object_name

    @property
    def visibility(self):
        """Gets the visibility of this BTInheritedAclInfo.  # noqa: E501


        :return: The visibility of this BTInheritedAclInfo.  # noqa: E501
        :rtype: str
        """
        return self._visibility

    @visibility.setter
    def visibility(self, visibility):
        """Sets the visibility of this BTInheritedAclInfo.


        :param visibility: The visibility of this BTInheritedAclInfo.  # noqa: E501
        :type: str
        """

        self._visibility = visibility

    @property
    def shared_with_support(self):
        """Gets the shared_with_support of this BTInheritedAclInfo.  # noqa: E501


        :return: The shared_with_support of this BTInheritedAclInfo.  # noqa: E501
        :rtype: bool
        """
        return self._shared_with_support

    @shared_with_support.setter
    def shared_with_support(self, shared_with_support):
        """Sets the shared_with_support of this BTInheritedAclInfo.


        :param shared_with_support: The shared_with_support of this BTInheritedAclInfo.  # noqa: E501
        :type: bool
        """

        self._shared_with_support = shared_with_support

    @property
    def entries(self):
        """Gets the entries of this BTInheritedAclInfo.  # noqa: E501


        :return: The entries of this BTInheritedAclInfo.  # noqa: E501
        :rtype: list[BTAclEntryInfo]
        """
        return self._entries

    @entries.setter
    def entries(self, entries):
        """Sets the entries of this BTInheritedAclInfo.


        :param entries: The entries of this BTInheritedAclInfo.  # noqa: E501
        :type: list[BTAclEntryInfo]
        """

        self._entries = entries

    @property
    def object_id(self):
        """Gets the object_id of this BTInheritedAclInfo.  # noqa: E501


        :return: The object_id of this BTInheritedAclInfo.  # noqa: E501
        :rtype: str
        """
        return self._object_id

    @object_id.setter
    def object_id(self, object_id):
        """Sets the object_id of this BTInheritedAclInfo.


        :param object_id: The object_id of this BTInheritedAclInfo.  # noqa: E501
        :type: str
        """

        self._object_id = object_id

    @property
    def object_type(self):
        """Gets the object_type of this BTInheritedAclInfo.  # noqa: E501


        :return: The object_type of this BTInheritedAclInfo.  # noqa: E501
        :rtype: int
        """
        return self._object_type

    @object_type.setter
    def object_type(self, object_type):
        """Sets the object_type of this BTInheritedAclInfo.


        :param object_type: The object_type of this BTInheritedAclInfo.  # noqa: E501
        :type: int
        """

        self._object_type = object_type

    @property
    def public(self):
        """Gets the public of this BTInheritedAclInfo.  # noqa: E501


        :return: The public of this BTInheritedAclInfo.  # noqa: E501
        :rtype: bool
        """
        return self._public

    @public.setter
    def public(self, public):
        """Sets the public of this BTInheritedAclInfo.


        :param public: The public of this BTInheritedAclInfo.  # noqa: E501
        :type: bool
        """

        self._public = public

    @property
    def owner(self):
        """Gets the owner of this BTInheritedAclInfo.  # noqa: E501


        :return: The owner of this BTInheritedAclInfo.  # noqa: E501
        :rtype: BTOwnerInfo
        """
        return self._owner

    @owner.setter
    def owner(self, owner):
        """Sets the owner of this BTInheritedAclInfo.


        :param owner: The owner of this BTInheritedAclInfo.  # noqa: E501
        :type: BTOwnerInfo
        """

        self._owner = owner

    @property
    def id(self):
        """Gets the id of this BTInheritedAclInfo.  # noqa: E501


        :return: The id of this BTInheritedAclInfo.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTInheritedAclInfo.


        :param id: The id of this BTInheritedAclInfo.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def href(self):
        """Gets the href of this BTInheritedAclInfo.  # noqa: E501


        :return: The href of this BTInheritedAclInfo.  # noqa: E501
        :rtype: str
        """
        return self._href

    @href.setter
    def href(self, href):
        """Sets the href of this BTInheritedAclInfo.


        :param href: The href of this BTInheritedAclInfo.  # noqa: E501
        :type: str
        """

        self._href = href

    @property
    def view_ref(self):
        """Gets the view_ref of this BTInheritedAclInfo.  # noqa: E501


        :return: The view_ref of this BTInheritedAclInfo.  # noqa: E501
        :rtype: str
        """
        return self._view_ref

    @view_ref.setter
    def view_ref(self, view_ref):
        """Sets the view_ref of this BTInheritedAclInfo.


        :param view_ref: The view_ref of this BTInheritedAclInfo.  # noqa: E501
        :type: str
        """

        self._view_ref = view_ref

    @property
    def name(self):
        """Gets the name of this BTInheritedAclInfo.  # noqa: E501


        :return: The name of this BTInheritedAclInfo.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTInheritedAclInfo.


        :param name: The name of this BTInheritedAclInfo.  # noqa: E501
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
        if not isinstance(other, BTInheritedAclInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

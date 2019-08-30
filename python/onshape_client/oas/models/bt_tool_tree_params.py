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


class BTToolTreeParams(object):
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
        'node_type': 'int',
        'tool_name': 'str',
        'tooltip_key': 'str',
        'expanded_tooltip_key': 'str',
        'command': 'str',
        'command_details': 'str',
        'feature_spec_name': 'str',
        'fs_version': 'int',
        'use_dynamic_snippet': 'bool',
        'use_history': 'bool',
        'mini': 'bool',
        'collection_name': 'str',
        'icon_initials': 'str',
        'context_menu': 'str',
        'is_newer_version_available': 'bool',
        'capability': 'str',
        'owner_id': 'str',
        'namespace': 'str',
        'icon': 'str',
        'owner_type': 'int',
        'context': 'int',
        'priority': 'int',
        'id': 'str',
        'active': 'bool'
    }

    attribute_map = {
        'node_type': 'nodeType',
        'tool_name': 'toolName',
        'tooltip_key': 'tooltipKey',
        'expanded_tooltip_key': 'expandedTooltipKey',
        'command': 'command',
        'command_details': 'commandDetails',
        'feature_spec_name': 'featureSpecName',
        'fs_version': 'fsVersion',
        'use_dynamic_snippet': 'useDynamicSnippet',
        'use_history': 'useHistory',
        'mini': 'mini',
        'collection_name': 'collectionName',
        'icon_initials': 'iconInitials',
        'context_menu': 'contextMenu',
        'is_newer_version_available': 'isNewerVersionAvailable',
        'capability': 'capability',
        'owner_id': 'ownerId',
        'namespace': 'namespace',
        'icon': 'icon',
        'owner_type': 'ownerType',
        'context': 'context',
        'priority': 'priority',
        'id': 'id',
        'active': 'active'
    }

    def __init__(self, node_type=None, tool_name=None, tooltip_key=None, expanded_tooltip_key=None, command=None, command_details=None, feature_spec_name=None, fs_version=None, use_dynamic_snippet=None, use_history=None, mini=None, collection_name=None, icon_initials=None, context_menu=None, is_newer_version_available=None, capability=None, owner_id=None, namespace=None, icon=None, owner_type=None, context=None, priority=None, id=None, active=None):  # noqa: E501
        """BTToolTreeParams - a model defined in OpenAPI"""  # noqa: E501

        self._node_type = None
        self._tool_name = None
        self._tooltip_key = None
        self._expanded_tooltip_key = None
        self._command = None
        self._command_details = None
        self._feature_spec_name = None
        self._fs_version = None
        self._use_dynamic_snippet = None
        self._use_history = None
        self._mini = None
        self._collection_name = None
        self._icon_initials = None
        self._context_menu = None
        self._is_newer_version_available = None
        self._capability = None
        self._owner_id = None
        self._namespace = None
        self._icon = None
        self._owner_type = None
        self._context = None
        self._priority = None
        self._id = None
        self._active = None
        self.discriminator = None

        if node_type is not None:
            self.node_type = node_type
        if tool_name is not None:
            self.tool_name = tool_name
        if tooltip_key is not None:
            self.tooltip_key = tooltip_key
        if expanded_tooltip_key is not None:
            self.expanded_tooltip_key = expanded_tooltip_key
        if command is not None:
            self.command = command
        if command_details is not None:
            self.command_details = command_details
        if feature_spec_name is not None:
            self.feature_spec_name = feature_spec_name
        if fs_version is not None:
            self.fs_version = fs_version
        if use_dynamic_snippet is not None:
            self.use_dynamic_snippet = use_dynamic_snippet
        if use_history is not None:
            self.use_history = use_history
        if mini is not None:
            self.mini = mini
        if collection_name is not None:
            self.collection_name = collection_name
        if icon_initials is not None:
            self.icon_initials = icon_initials
        if context_menu is not None:
            self.context_menu = context_menu
        if is_newer_version_available is not None:
            self.is_newer_version_available = is_newer_version_available
        if capability is not None:
            self.capability = capability
        if owner_id is not None:
            self.owner_id = owner_id
        if namespace is not None:
            self.namespace = namespace
        if icon is not None:
            self.icon = icon
        if owner_type is not None:
            self.owner_type = owner_type
        if context is not None:
            self.context = context
        if priority is not None:
            self.priority = priority
        if id is not None:
            self.id = id
        if active is not None:
            self.active = active

    @property
    def node_type(self):
        """Gets the node_type of this BTToolTreeParams.  # noqa: E501


        :return: The node_type of this BTToolTreeParams.  # noqa: E501
        :rtype: int
        """
        return self._node_type

    @node_type.setter
    def node_type(self, node_type):
        """Sets the node_type of this BTToolTreeParams.


        :param node_type: The node_type of this BTToolTreeParams.  # noqa: E501
        :type: int
        """

        self._node_type = node_type

    @property
    def tool_name(self):
        """Gets the tool_name of this BTToolTreeParams.  # noqa: E501


        :return: The tool_name of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._tool_name

    @tool_name.setter
    def tool_name(self, tool_name):
        """Sets the tool_name of this BTToolTreeParams.


        :param tool_name: The tool_name of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._tool_name = tool_name

    @property
    def tooltip_key(self):
        """Gets the tooltip_key of this BTToolTreeParams.  # noqa: E501


        :return: The tooltip_key of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._tooltip_key

    @tooltip_key.setter
    def tooltip_key(self, tooltip_key):
        """Sets the tooltip_key of this BTToolTreeParams.


        :param tooltip_key: The tooltip_key of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._tooltip_key = tooltip_key

    @property
    def expanded_tooltip_key(self):
        """Gets the expanded_tooltip_key of this BTToolTreeParams.  # noqa: E501


        :return: The expanded_tooltip_key of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._expanded_tooltip_key

    @expanded_tooltip_key.setter
    def expanded_tooltip_key(self, expanded_tooltip_key):
        """Sets the expanded_tooltip_key of this BTToolTreeParams.


        :param expanded_tooltip_key: The expanded_tooltip_key of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._expanded_tooltip_key = expanded_tooltip_key

    @property
    def command(self):
        """Gets the command of this BTToolTreeParams.  # noqa: E501


        :return: The command of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._command

    @command.setter
    def command(self, command):
        """Sets the command of this BTToolTreeParams.


        :param command: The command of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._command = command

    @property
    def command_details(self):
        """Gets the command_details of this BTToolTreeParams.  # noqa: E501


        :return: The command_details of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._command_details

    @command_details.setter
    def command_details(self, command_details):
        """Sets the command_details of this BTToolTreeParams.


        :param command_details: The command_details of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._command_details = command_details

    @property
    def feature_spec_name(self):
        """Gets the feature_spec_name of this BTToolTreeParams.  # noqa: E501


        :return: The feature_spec_name of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._feature_spec_name

    @feature_spec_name.setter
    def feature_spec_name(self, feature_spec_name):
        """Sets the feature_spec_name of this BTToolTreeParams.


        :param feature_spec_name: The feature_spec_name of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._feature_spec_name = feature_spec_name

    @property
    def fs_version(self):
        """Gets the fs_version of this BTToolTreeParams.  # noqa: E501


        :return: The fs_version of this BTToolTreeParams.  # noqa: E501
        :rtype: int
        """
        return self._fs_version

    @fs_version.setter
    def fs_version(self, fs_version):
        """Sets the fs_version of this BTToolTreeParams.


        :param fs_version: The fs_version of this BTToolTreeParams.  # noqa: E501
        :type: int
        """

        self._fs_version = fs_version

    @property
    def use_dynamic_snippet(self):
        """Gets the use_dynamic_snippet of this BTToolTreeParams.  # noqa: E501


        :return: The use_dynamic_snippet of this BTToolTreeParams.  # noqa: E501
        :rtype: bool
        """
        return self._use_dynamic_snippet

    @use_dynamic_snippet.setter
    def use_dynamic_snippet(self, use_dynamic_snippet):
        """Sets the use_dynamic_snippet of this BTToolTreeParams.


        :param use_dynamic_snippet: The use_dynamic_snippet of this BTToolTreeParams.  # noqa: E501
        :type: bool
        """

        self._use_dynamic_snippet = use_dynamic_snippet

    @property
    def use_history(self):
        """Gets the use_history of this BTToolTreeParams.  # noqa: E501


        :return: The use_history of this BTToolTreeParams.  # noqa: E501
        :rtype: bool
        """
        return self._use_history

    @use_history.setter
    def use_history(self, use_history):
        """Sets the use_history of this BTToolTreeParams.


        :param use_history: The use_history of this BTToolTreeParams.  # noqa: E501
        :type: bool
        """

        self._use_history = use_history

    @property
    def mini(self):
        """Gets the mini of this BTToolTreeParams.  # noqa: E501


        :return: The mini of this BTToolTreeParams.  # noqa: E501
        :rtype: bool
        """
        return self._mini

    @mini.setter
    def mini(self, mini):
        """Sets the mini of this BTToolTreeParams.


        :param mini: The mini of this BTToolTreeParams.  # noqa: E501
        :type: bool
        """

        self._mini = mini

    @property
    def collection_name(self):
        """Gets the collection_name of this BTToolTreeParams.  # noqa: E501


        :return: The collection_name of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._collection_name

    @collection_name.setter
    def collection_name(self, collection_name):
        """Sets the collection_name of this BTToolTreeParams.


        :param collection_name: The collection_name of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._collection_name = collection_name

    @property
    def icon_initials(self):
        """Gets the icon_initials of this BTToolTreeParams.  # noqa: E501


        :return: The icon_initials of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._icon_initials

    @icon_initials.setter
    def icon_initials(self, icon_initials):
        """Sets the icon_initials of this BTToolTreeParams.


        :param icon_initials: The icon_initials of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._icon_initials = icon_initials

    @property
    def context_menu(self):
        """Gets the context_menu of this BTToolTreeParams.  # noqa: E501


        :return: The context_menu of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._context_menu

    @context_menu.setter
    def context_menu(self, context_menu):
        """Sets the context_menu of this BTToolTreeParams.


        :param context_menu: The context_menu of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._context_menu = context_menu

    @property
    def is_newer_version_available(self):
        """Gets the is_newer_version_available of this BTToolTreeParams.  # noqa: E501


        :return: The is_newer_version_available of this BTToolTreeParams.  # noqa: E501
        :rtype: bool
        """
        return self._is_newer_version_available

    @is_newer_version_available.setter
    def is_newer_version_available(self, is_newer_version_available):
        """Sets the is_newer_version_available of this BTToolTreeParams.


        :param is_newer_version_available: The is_newer_version_available of this BTToolTreeParams.  # noqa: E501
        :type: bool
        """

        self._is_newer_version_available = is_newer_version_available

    @property
    def capability(self):
        """Gets the capability of this BTToolTreeParams.  # noqa: E501


        :return: The capability of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._capability

    @capability.setter
    def capability(self, capability):
        """Sets the capability of this BTToolTreeParams.


        :param capability: The capability of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._capability = capability

    @property
    def owner_id(self):
        """Gets the owner_id of this BTToolTreeParams.  # noqa: E501


        :return: The owner_id of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._owner_id

    @owner_id.setter
    def owner_id(self, owner_id):
        """Sets the owner_id of this BTToolTreeParams.


        :param owner_id: The owner_id of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._owner_id = owner_id

    @property
    def namespace(self):
        """Gets the namespace of this BTToolTreeParams.  # noqa: E501


        :return: The namespace of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._namespace

    @namespace.setter
    def namespace(self, namespace):
        """Sets the namespace of this BTToolTreeParams.


        :param namespace: The namespace of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._namespace = namespace

    @property
    def icon(self):
        """Gets the icon of this BTToolTreeParams.  # noqa: E501


        :return: The icon of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._icon

    @icon.setter
    def icon(self, icon):
        """Sets the icon of this BTToolTreeParams.


        :param icon: The icon of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._icon = icon

    @property
    def owner_type(self):
        """Gets the owner_type of this BTToolTreeParams.  # noqa: E501


        :return: The owner_type of this BTToolTreeParams.  # noqa: E501
        :rtype: int
        """
        return self._owner_type

    @owner_type.setter
    def owner_type(self, owner_type):
        """Sets the owner_type of this BTToolTreeParams.


        :param owner_type: The owner_type of this BTToolTreeParams.  # noqa: E501
        :type: int
        """

        self._owner_type = owner_type

    @property
    def context(self):
        """Gets the context of this BTToolTreeParams.  # noqa: E501


        :return: The context of this BTToolTreeParams.  # noqa: E501
        :rtype: int
        """
        return self._context

    @context.setter
    def context(self, context):
        """Sets the context of this BTToolTreeParams.


        :param context: The context of this BTToolTreeParams.  # noqa: E501
        :type: int
        """

        self._context = context

    @property
    def priority(self):
        """Gets the priority of this BTToolTreeParams.  # noqa: E501


        :return: The priority of this BTToolTreeParams.  # noqa: E501
        :rtype: int
        """
        return self._priority

    @priority.setter
    def priority(self, priority):
        """Sets the priority of this BTToolTreeParams.


        :param priority: The priority of this BTToolTreeParams.  # noqa: E501
        :type: int
        """

        self._priority = priority

    @property
    def id(self):
        """Gets the id of this BTToolTreeParams.  # noqa: E501


        :return: The id of this BTToolTreeParams.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTToolTreeParams.


        :param id: The id of this BTToolTreeParams.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def active(self):
        """Gets the active of this BTToolTreeParams.  # noqa: E501


        :return: The active of this BTToolTreeParams.  # noqa: E501
        :rtype: bool
        """
        return self._active

    @active.setter
    def active(self, active):
        """Sets the active of this BTToolTreeParams.


        :param active: The active of this BTToolTreeParams.  # noqa: E501
        :type: bool
        """

        self._active = active

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
        if not isinstance(other, BTToolTreeParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

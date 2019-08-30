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


class BTWorkflowActionInfo(object):
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
        'label': 'str',
        'required_properties': 'list[str]',
        'action': 'str',
        'is_approver_action': 'bool',
        'is_admin_override': 'bool',
        'ui_hint': 'str',
        'allow_if_no_approvers': 'bool',
        'tooltip': 'str',
        'allow_if_approvers': 'bool',
        'always_allow': 'bool'
    }

    attribute_map = {
        'label': 'label',
        'required_properties': 'requiredProperties',
        'action': 'action',
        'is_approver_action': 'isApproverAction',
        'is_admin_override': 'isAdminOverride',
        'ui_hint': 'uiHint',
        'allow_if_no_approvers': 'allowIfNoApprovers',
        'tooltip': 'tooltip',
        'allow_if_approvers': 'allowIfApprovers',
        'always_allow': 'alwaysAllow'
    }

    def __init__(self, label=None, required_properties=None, action=None, is_approver_action=None, is_admin_override=None, ui_hint=None, allow_if_no_approvers=None, tooltip=None, allow_if_approvers=None, always_allow=None):  # noqa: E501
        """BTWorkflowActionInfo - a model defined in OpenAPI"""  # noqa: E501

        self._label = None
        self._required_properties = None
        self._action = None
        self._is_approver_action = None
        self._is_admin_override = None
        self._ui_hint = None
        self._allow_if_no_approvers = None
        self._tooltip = None
        self._allow_if_approvers = None
        self._always_allow = None
        self.discriminator = None

        if label is not None:
            self.label = label
        if required_properties is not None:
            self.required_properties = required_properties
        if action is not None:
            self.action = action
        if is_approver_action is not None:
            self.is_approver_action = is_approver_action
        if is_admin_override is not None:
            self.is_admin_override = is_admin_override
        if ui_hint is not None:
            self.ui_hint = ui_hint
        if allow_if_no_approvers is not None:
            self.allow_if_no_approvers = allow_if_no_approvers
        if tooltip is not None:
            self.tooltip = tooltip
        if allow_if_approvers is not None:
            self.allow_if_approvers = allow_if_approvers
        if always_allow is not None:
            self.always_allow = always_allow

    @property
    def label(self):
        """Gets the label of this BTWorkflowActionInfo.  # noqa: E501


        :return: The label of this BTWorkflowActionInfo.  # noqa: E501
        :rtype: str
        """
        return self._label

    @label.setter
    def label(self, label):
        """Sets the label of this BTWorkflowActionInfo.


        :param label: The label of this BTWorkflowActionInfo.  # noqa: E501
        :type: str
        """

        self._label = label

    @property
    def required_properties(self):
        """Gets the required_properties of this BTWorkflowActionInfo.  # noqa: E501


        :return: The required_properties of this BTWorkflowActionInfo.  # noqa: E501
        :rtype: list[str]
        """
        return self._required_properties

    @required_properties.setter
    def required_properties(self, required_properties):
        """Sets the required_properties of this BTWorkflowActionInfo.


        :param required_properties: The required_properties of this BTWorkflowActionInfo.  # noqa: E501
        :type: list[str]
        """

        self._required_properties = required_properties

    @property
    def action(self):
        """Gets the action of this BTWorkflowActionInfo.  # noqa: E501


        :return: The action of this BTWorkflowActionInfo.  # noqa: E501
        :rtype: str
        """
        return self._action

    @action.setter
    def action(self, action):
        """Sets the action of this BTWorkflowActionInfo.


        :param action: The action of this BTWorkflowActionInfo.  # noqa: E501
        :type: str
        """

        self._action = action

    @property
    def is_approver_action(self):
        """Gets the is_approver_action of this BTWorkflowActionInfo.  # noqa: E501


        :return: The is_approver_action of this BTWorkflowActionInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_approver_action

    @is_approver_action.setter
    def is_approver_action(self, is_approver_action):
        """Sets the is_approver_action of this BTWorkflowActionInfo.


        :param is_approver_action: The is_approver_action of this BTWorkflowActionInfo.  # noqa: E501
        :type: bool
        """

        self._is_approver_action = is_approver_action

    @property
    def is_admin_override(self):
        """Gets the is_admin_override of this BTWorkflowActionInfo.  # noqa: E501


        :return: The is_admin_override of this BTWorkflowActionInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_admin_override

    @is_admin_override.setter
    def is_admin_override(self, is_admin_override):
        """Sets the is_admin_override of this BTWorkflowActionInfo.


        :param is_admin_override: The is_admin_override of this BTWorkflowActionInfo.  # noqa: E501
        :type: bool
        """

        self._is_admin_override = is_admin_override

    @property
    def ui_hint(self):
        """Gets the ui_hint of this BTWorkflowActionInfo.  # noqa: E501


        :return: The ui_hint of this BTWorkflowActionInfo.  # noqa: E501
        :rtype: str
        """
        return self._ui_hint

    @ui_hint.setter
    def ui_hint(self, ui_hint):
        """Sets the ui_hint of this BTWorkflowActionInfo.


        :param ui_hint: The ui_hint of this BTWorkflowActionInfo.  # noqa: E501
        :type: str
        """

        self._ui_hint = ui_hint

    @property
    def allow_if_no_approvers(self):
        """Gets the allow_if_no_approvers of this BTWorkflowActionInfo.  # noqa: E501


        :return: The allow_if_no_approvers of this BTWorkflowActionInfo.  # noqa: E501
        :rtype: bool
        """
        return self._allow_if_no_approvers

    @allow_if_no_approvers.setter
    def allow_if_no_approvers(self, allow_if_no_approvers):
        """Sets the allow_if_no_approvers of this BTWorkflowActionInfo.


        :param allow_if_no_approvers: The allow_if_no_approvers of this BTWorkflowActionInfo.  # noqa: E501
        :type: bool
        """

        self._allow_if_no_approvers = allow_if_no_approvers

    @property
    def tooltip(self):
        """Gets the tooltip of this BTWorkflowActionInfo.  # noqa: E501


        :return: The tooltip of this BTWorkflowActionInfo.  # noqa: E501
        :rtype: str
        """
        return self._tooltip

    @tooltip.setter
    def tooltip(self, tooltip):
        """Sets the tooltip of this BTWorkflowActionInfo.


        :param tooltip: The tooltip of this BTWorkflowActionInfo.  # noqa: E501
        :type: str
        """

        self._tooltip = tooltip

    @property
    def allow_if_approvers(self):
        """Gets the allow_if_approvers of this BTWorkflowActionInfo.  # noqa: E501


        :return: The allow_if_approvers of this BTWorkflowActionInfo.  # noqa: E501
        :rtype: bool
        """
        return self._allow_if_approvers

    @allow_if_approvers.setter
    def allow_if_approvers(self, allow_if_approvers):
        """Sets the allow_if_approvers of this BTWorkflowActionInfo.


        :param allow_if_approvers: The allow_if_approvers of this BTWorkflowActionInfo.  # noqa: E501
        :type: bool
        """

        self._allow_if_approvers = allow_if_approvers

    @property
    def always_allow(self):
        """Gets the always_allow of this BTWorkflowActionInfo.  # noqa: E501


        :return: The always_allow of this BTWorkflowActionInfo.  # noqa: E501
        :rtype: bool
        """
        return self._always_allow

    @always_allow.setter
    def always_allow(self, always_allow):
        """Sets the always_allow of this BTWorkflowActionInfo.


        :param always_allow: The always_allow of this BTWorkflowActionInfo.  # noqa: E501
        :type: bool
        """

        self._always_allow = always_allow

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
        if not isinstance(other, BTWorkflowActionInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

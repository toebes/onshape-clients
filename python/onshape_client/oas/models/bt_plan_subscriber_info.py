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


class BTPlanSubscriberInfo(object):
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
        'first_name': 'str',
        'last_name': 'str',
        'email': 'str',
        'image': 'str',
        'state': 'int',
        'id': 'str',
        'href': 'str',
        'view_ref': 'str',
        'name': 'str'
    }

    attribute_map = {
        'first_name': 'firstName',
        'last_name': 'lastName',
        'email': 'email',
        'image': 'image',
        'state': 'state',
        'id': 'id',
        'href': 'href',
        'view_ref': 'viewRef',
        'name': 'name'
    }

    def __init__(self, first_name=None, last_name=None, email=None, image=None, state=None, id=None, href=None, view_ref=None, name=None):  # noqa: E501
        """BTPlanSubscriberInfo - a model defined in OpenAPI"""  # noqa: E501

        self._first_name = None
        self._last_name = None
        self._email = None
        self._image = None
        self._state = None
        self._id = None
        self._href = None
        self._view_ref = None
        self._name = None
        self.discriminator = None

        if first_name is not None:
            self.first_name = first_name
        if last_name is not None:
            self.last_name = last_name
        if email is not None:
            self.email = email
        if image is not None:
            self.image = image
        if state is not None:
            self.state = state
        if id is not None:
            self.id = id
        if href is not None:
            self.href = href
        if view_ref is not None:
            self.view_ref = view_ref
        if name is not None:
            self.name = name

    @property
    def first_name(self):
        """Gets the first_name of this BTPlanSubscriberInfo.  # noqa: E501


        :return: The first_name of this BTPlanSubscriberInfo.  # noqa: E501
        :rtype: str
        """
        return self._first_name

    @first_name.setter
    def first_name(self, first_name):
        """Sets the first_name of this BTPlanSubscriberInfo.


        :param first_name: The first_name of this BTPlanSubscriberInfo.  # noqa: E501
        :type: str
        """

        self._first_name = first_name

    @property
    def last_name(self):
        """Gets the last_name of this BTPlanSubscriberInfo.  # noqa: E501


        :return: The last_name of this BTPlanSubscriberInfo.  # noqa: E501
        :rtype: str
        """
        return self._last_name

    @last_name.setter
    def last_name(self, last_name):
        """Sets the last_name of this BTPlanSubscriberInfo.


        :param last_name: The last_name of this BTPlanSubscriberInfo.  # noqa: E501
        :type: str
        """

        self._last_name = last_name

    @property
    def email(self):
        """Gets the email of this BTPlanSubscriberInfo.  # noqa: E501


        :return: The email of this BTPlanSubscriberInfo.  # noqa: E501
        :rtype: str
        """
        return self._email

    @email.setter
    def email(self, email):
        """Sets the email of this BTPlanSubscriberInfo.


        :param email: The email of this BTPlanSubscriberInfo.  # noqa: E501
        :type: str
        """

        self._email = email

    @property
    def image(self):
        """Gets the image of this BTPlanSubscriberInfo.  # noqa: E501


        :return: The image of this BTPlanSubscriberInfo.  # noqa: E501
        :rtype: str
        """
        return self._image

    @image.setter
    def image(self, image):
        """Sets the image of this BTPlanSubscriberInfo.


        :param image: The image of this BTPlanSubscriberInfo.  # noqa: E501
        :type: str
        """

        self._image = image

    @property
    def state(self):
        """Gets the state of this BTPlanSubscriberInfo.  # noqa: E501


        :return: The state of this BTPlanSubscriberInfo.  # noqa: E501
        :rtype: int
        """
        return self._state

    @state.setter
    def state(self, state):
        """Sets the state of this BTPlanSubscriberInfo.


        :param state: The state of this BTPlanSubscriberInfo.  # noqa: E501
        :type: int
        """

        self._state = state

    @property
    def id(self):
        """Gets the id of this BTPlanSubscriberInfo.  # noqa: E501


        :return: The id of this BTPlanSubscriberInfo.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTPlanSubscriberInfo.


        :param id: The id of this BTPlanSubscriberInfo.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def href(self):
        """Gets the href of this BTPlanSubscriberInfo.  # noqa: E501


        :return: The href of this BTPlanSubscriberInfo.  # noqa: E501
        :rtype: str
        """
        return self._href

    @href.setter
    def href(self, href):
        """Sets the href of this BTPlanSubscriberInfo.


        :param href: The href of this BTPlanSubscriberInfo.  # noqa: E501
        :type: str
        """

        self._href = href

    @property
    def view_ref(self):
        """Gets the view_ref of this BTPlanSubscriberInfo.  # noqa: E501


        :return: The view_ref of this BTPlanSubscriberInfo.  # noqa: E501
        :rtype: str
        """
        return self._view_ref

    @view_ref.setter
    def view_ref(self, view_ref):
        """Sets the view_ref of this BTPlanSubscriberInfo.


        :param view_ref: The view_ref of this BTPlanSubscriberInfo.  # noqa: E501
        :type: str
        """

        self._view_ref = view_ref

    @property
    def name(self):
        """Gets the name of this BTPlanSubscriberInfo.  # noqa: E501


        :return: The name of this BTPlanSubscriberInfo.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTPlanSubscriberInfo.


        :param name: The name of this BTPlanSubscriberInfo.  # noqa: E501
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
        if not isinstance(other, BTPlanSubscriberInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

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


class JsonNode(object):
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
        'textual': 'bool',
        'node_type': 'str',
        'object': 'bool',
        'value_node': 'bool',
        'container_node': 'bool',
        'missing_node': 'bool',
        'pojo': 'bool',
        'number': 'bool',
        'integral_number': 'bool',
        'floating_point_number': 'bool',
        'short': 'bool',
        'int': 'bool',
        'long': 'bool',
        'double': 'bool',
        'big_decimal': 'bool',
        'big_integer': 'bool',
        'boolean': 'bool',
        'binary': 'bool',
        'float': 'bool',
        'array': 'bool',
        'null': 'bool'
    }

    attribute_map = {
        'textual': 'textual',
        'node_type': 'nodeType',
        'object': 'object',
        'value_node': 'valueNode',
        'container_node': 'containerNode',
        'missing_node': 'missingNode',
        'pojo': 'pojo',
        'number': 'number',
        'integral_number': 'integralNumber',
        'floating_point_number': 'floatingPointNumber',
        'short': 'short',
        'int': 'int',
        'long': 'long',
        'double': 'double',
        'big_decimal': 'bigDecimal',
        'big_integer': 'bigInteger',
        'boolean': 'boolean',
        'binary': 'binary',
        'float': 'float',
        'array': 'array',
        'null': 'null'
    }

    def __init__(self, textual=None, node_type=None, object=None, value_node=None, container_node=None, missing_node=None, pojo=None, number=None, integral_number=None, floating_point_number=None, short=None, int=None, long=None, double=None, big_decimal=None, big_integer=None, boolean=None, binary=None, float=None, array=None, null=None):  # noqa: E501
        """JsonNode - a model defined in OpenAPI"""  # noqa: E501

        self._textual = None
        self._node_type = None
        self._object = None
        self._value_node = None
        self._container_node = None
        self._missing_node = None
        self._pojo = None
        self._number = None
        self._integral_number = None
        self._floating_point_number = None
        self._short = None
        self._int = None
        self._long = None
        self._double = None
        self._big_decimal = None
        self._big_integer = None
        self._boolean = None
        self._binary = None
        self._float = None
        self._array = None
        self._null = None
        self.discriminator = None

        if textual is not None:
            self.textual = textual
        if node_type is not None:
            self.node_type = node_type
        if object is not None:
            self.object = object
        if value_node is not None:
            self.value_node = value_node
        if container_node is not None:
            self.container_node = container_node
        if missing_node is not None:
            self.missing_node = missing_node
        if pojo is not None:
            self.pojo = pojo
        if number is not None:
            self.number = number
        if integral_number is not None:
            self.integral_number = integral_number
        if floating_point_number is not None:
            self.floating_point_number = floating_point_number
        if short is not None:
            self.short = short
        if int is not None:
            self.int = int
        if long is not None:
            self.long = long
        if double is not None:
            self.double = double
        if big_decimal is not None:
            self.big_decimal = big_decimal
        if big_integer is not None:
            self.big_integer = big_integer
        if boolean is not None:
            self.boolean = boolean
        if binary is not None:
            self.binary = binary
        if float is not None:
            self.float = float
        if array is not None:
            self.array = array
        if null is not None:
            self.null = null

    @property
    def textual(self):
        """Gets the textual of this JsonNode.  # noqa: E501


        :return: The textual of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._textual

    @textual.setter
    def textual(self, textual):
        """Sets the textual of this JsonNode.


        :param textual: The textual of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._textual = textual

    @property
    def node_type(self):
        """Gets the node_type of this JsonNode.  # noqa: E501


        :return: The node_type of this JsonNode.  # noqa: E501
        :rtype: str
        """
        return self._node_type

    @node_type.setter
    def node_type(self, node_type):
        """Sets the node_type of this JsonNode.


        :param node_type: The node_type of this JsonNode.  # noqa: E501
        :type: str
        """
        allowed_values = ["ARRAY", "BINARY", "BOOLEAN", "MISSING", "NULL", "NUMBER", "OBJECT", "POJO", "STRING"]  # noqa: E501
        if node_type not in allowed_values:
            raise ValueError(
                "Invalid value for `node_type` ({0}), must be one of {1}"  # noqa: E501
                .format(node_type, allowed_values)
            )

        self._node_type = node_type

    @property
    def object(self):
        """Gets the object of this JsonNode.  # noqa: E501


        :return: The object of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._object

    @object.setter
    def object(self, object):
        """Sets the object of this JsonNode.


        :param object: The object of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._object = object

    @property
    def value_node(self):
        """Gets the value_node of this JsonNode.  # noqa: E501


        :return: The value_node of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._value_node

    @value_node.setter
    def value_node(self, value_node):
        """Sets the value_node of this JsonNode.


        :param value_node: The value_node of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._value_node = value_node

    @property
    def container_node(self):
        """Gets the container_node of this JsonNode.  # noqa: E501


        :return: The container_node of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._container_node

    @container_node.setter
    def container_node(self, container_node):
        """Sets the container_node of this JsonNode.


        :param container_node: The container_node of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._container_node = container_node

    @property
    def missing_node(self):
        """Gets the missing_node of this JsonNode.  # noqa: E501


        :return: The missing_node of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._missing_node

    @missing_node.setter
    def missing_node(self, missing_node):
        """Sets the missing_node of this JsonNode.


        :param missing_node: The missing_node of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._missing_node = missing_node

    @property
    def pojo(self):
        """Gets the pojo of this JsonNode.  # noqa: E501


        :return: The pojo of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._pojo

    @pojo.setter
    def pojo(self, pojo):
        """Sets the pojo of this JsonNode.


        :param pojo: The pojo of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._pojo = pojo

    @property
    def number(self):
        """Gets the number of this JsonNode.  # noqa: E501


        :return: The number of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._number

    @number.setter
    def number(self, number):
        """Sets the number of this JsonNode.


        :param number: The number of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._number = number

    @property
    def integral_number(self):
        """Gets the integral_number of this JsonNode.  # noqa: E501


        :return: The integral_number of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._integral_number

    @integral_number.setter
    def integral_number(self, integral_number):
        """Sets the integral_number of this JsonNode.


        :param integral_number: The integral_number of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._integral_number = integral_number

    @property
    def floating_point_number(self):
        """Gets the floating_point_number of this JsonNode.  # noqa: E501


        :return: The floating_point_number of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._floating_point_number

    @floating_point_number.setter
    def floating_point_number(self, floating_point_number):
        """Sets the floating_point_number of this JsonNode.


        :param floating_point_number: The floating_point_number of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._floating_point_number = floating_point_number

    @property
    def short(self):
        """Gets the short of this JsonNode.  # noqa: E501


        :return: The short of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._short

    @short.setter
    def short(self, short):
        """Sets the short of this JsonNode.


        :param short: The short of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._short = short

    @property
    def int(self):
        """Gets the int of this JsonNode.  # noqa: E501


        :return: The int of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._int

    @int.setter
    def int(self, int):
        """Sets the int of this JsonNode.


        :param int: The int of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._int = int

    @property
    def long(self):
        """Gets the long of this JsonNode.  # noqa: E501


        :return: The long of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._long

    @long.setter
    def long(self, long):
        """Sets the long of this JsonNode.


        :param long: The long of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._long = long

    @property
    def double(self):
        """Gets the double of this JsonNode.  # noqa: E501


        :return: The double of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._double

    @double.setter
    def double(self, double):
        """Sets the double of this JsonNode.


        :param double: The double of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._double = double

    @property
    def big_decimal(self):
        """Gets the big_decimal of this JsonNode.  # noqa: E501


        :return: The big_decimal of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._big_decimal

    @big_decimal.setter
    def big_decimal(self, big_decimal):
        """Sets the big_decimal of this JsonNode.


        :param big_decimal: The big_decimal of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._big_decimal = big_decimal

    @property
    def big_integer(self):
        """Gets the big_integer of this JsonNode.  # noqa: E501


        :return: The big_integer of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._big_integer

    @big_integer.setter
    def big_integer(self, big_integer):
        """Sets the big_integer of this JsonNode.


        :param big_integer: The big_integer of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._big_integer = big_integer

    @property
    def boolean(self):
        """Gets the boolean of this JsonNode.  # noqa: E501


        :return: The boolean of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._boolean

    @boolean.setter
    def boolean(self, boolean):
        """Sets the boolean of this JsonNode.


        :param boolean: The boolean of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._boolean = boolean

    @property
    def binary(self):
        """Gets the binary of this JsonNode.  # noqa: E501


        :return: The binary of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._binary

    @binary.setter
    def binary(self, binary):
        """Sets the binary of this JsonNode.


        :param binary: The binary of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._binary = binary

    @property
    def float(self):
        """Gets the float of this JsonNode.  # noqa: E501


        :return: The float of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._float

    @float.setter
    def float(self, float):
        """Sets the float of this JsonNode.


        :param float: The float of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._float = float

    @property
    def array(self):
        """Gets the array of this JsonNode.  # noqa: E501


        :return: The array of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._array

    @array.setter
    def array(self, array):
        """Sets the array of this JsonNode.


        :param array: The array of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._array = array

    @property
    def null(self):
        """Gets the null of this JsonNode.  # noqa: E501


        :return: The null of this JsonNode.  # noqa: E501
        :rtype: bool
        """
        return self._null

    @null.setter
    def null(self, null):
        """Sets the null of this JsonNode.


        :param null: The null of this JsonNode.  # noqa: E501
        :type: bool
        """

        self._null = null

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
        if not isinstance(other, JsonNode):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

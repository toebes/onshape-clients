# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.113
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import
import re  # noqa: F401
import sys  # noqa: F401

import six  # noqa: F401
import nulltype  # noqa: F401

from onshape_client.oas.model_utils import (  # noqa: F401
    ModelComposed,
    ModelNormal,
    ModelSimple,
    date,
    datetime,
    file_type,
    int,
    none_type,
    str,
    validate_get_composed_info,
)


class JsonNode(ModelNormal):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Attributes:
      allowed_values (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          with a capitalized key describing the allowed value and an allowed
          value. These dicts store the allowed enum values.
      attribute_map (dict): The key is attribute name
          and the value is json key in definition.
      discriminator_value_class_map (dict): A dict to go from the discriminator
          variable value to the discriminator class name.
      validations (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          that stores validations for max_length, min_length, max_items,
          min_items, exclusive_maximum, inclusive_maximum, exclusive_minimum,
          inclusive_minimum, and regex.
      additional_properties_type (tuple): A tuple of classes accepted
          as additional properties values.
    """

    allowed_values = {
        ("node_type",): {
            "ARRAY": "ARRAY",
            "BINARY": "BINARY",
            "BOOLEAN": "BOOLEAN",
            "MISSING": "MISSING",
            "NULL": "NULL",
            "NUMBER": "NUMBER",
            "OBJECT": "OBJECT",
            "POJO": "POJO",
            "STRING": "STRING",
        },
    }

    validations = {}

    additional_properties_type = None

    @staticmethod
    def openapi_types():
        """
        This must be a class method so a model may have properties that are
        of type self, this ensures that we don't create a cyclic import

        Returns
            openapi_types (dict): The key is attribute name
                and the value is attribute type.
        """
        return {
            "array": (bool,),  # noqa: E501
            "big_decimal": (bool,),  # noqa: E501
            "big_integer": (bool,),  # noqa: E501
            "binary": (bool,),  # noqa: E501
            "boolean": (bool,),  # noqa: E501
            "container_node": (bool,),  # noqa: E501
            "double": (bool,),  # noqa: E501
            "empty": (bool,),  # noqa: E501
            "float": (bool,),  # noqa: E501
            "floating_point_number": (bool,),  # noqa: E501
            "int": (bool,),  # noqa: E501
            "integral_number": (bool,),  # noqa: E501
            "long": (bool,),  # noqa: E501
            "missing_node": (bool,),  # noqa: E501
            "node_type": (str,),  # noqa: E501
            "null": (bool,),  # noqa: E501
            "number": (bool,),  # noqa: E501
            "object": (bool,),  # noqa: E501
            "pojo": (bool,),  # noqa: E501
            "short": (bool,),  # noqa: E501
            "textual": (bool,),  # noqa: E501
            "value_node": (bool,),  # noqa: E501
        }

    @staticmethod
    def discriminator():
        return None

    attribute_map = {
        "array": "array",  # noqa: E501
        "big_decimal": "bigDecimal",  # noqa: E501
        "big_integer": "bigInteger",  # noqa: E501
        "binary": "binary",  # noqa: E501
        "boolean": "boolean",  # noqa: E501
        "container_node": "containerNode",  # noqa: E501
        "double": "double",  # noqa: E501
        "empty": "empty",  # noqa: E501
        "float": "float",  # noqa: E501
        "floating_point_number": "floatingPointNumber",  # noqa: E501
        "int": "int",  # noqa: E501
        "integral_number": "integralNumber",  # noqa: E501
        "long": "long",  # noqa: E501
        "missing_node": "missingNode",  # noqa: E501
        "node_type": "nodeType",  # noqa: E501
        "null": "null",  # noqa: E501
        "number": "number",  # noqa: E501
        "object": "object",  # noqa: E501
        "pojo": "pojo",  # noqa: E501
        "short": "short",  # noqa: E501
        "textual": "textual",  # noqa: E501
        "value_node": "valueNode",  # noqa: E501
    }

    @staticmethod
    def _composed_schemas():
        return None

    required_properties = set(
        [
            "_data_store",
            "_check_type",
            "_from_server",
            "_path_to_item",
            "_configuration",
        ]
    )

    def __init__(
        self,
        _check_type=True,
        _from_server=False,
        _path_to_item=(),
        _configuration=None,
        **kwargs
    ):  # noqa: E501
        """json_node.JsonNode - a model defined in OpenAPI

        Keyword Args:
            _check_type (bool): if True, values for parameters in openapi_types
                                will be type checked and a TypeError will be
                                raised if the wrong type is input.
                                Defaults to True
            _path_to_item (tuple/list): This is a list of keys or values to
                                drill down to the model in received_data
                                when deserializing a response
            _from_server (bool): True if the data is from the server
                                False if the data is from the client (default)
            _configuration (Configuration): the instance to use when
                                deserializing a file_type parameter.
                                If passed, type conversion is attempted
                                If omitted no type conversion is done.
            array (bool): [optional]  # noqa: E501
            big_decimal (bool): [optional]  # noqa: E501
            big_integer (bool): [optional]  # noqa: E501
            binary (bool): [optional]  # noqa: E501
            boolean (bool): [optional]  # noqa: E501
            container_node (bool): [optional]  # noqa: E501
            double (bool): [optional]  # noqa: E501
            empty (bool): [optional]  # noqa: E501
            float (bool): [optional]  # noqa: E501
            floating_point_number (bool): [optional]  # noqa: E501
            int (bool): [optional]  # noqa: E501
            integral_number (bool): [optional]  # noqa: E501
            long (bool): [optional]  # noqa: E501
            missing_node (bool): [optional]  # noqa: E501
            node_type (str): [optional]  # noqa: E501
            null (bool): [optional]  # noqa: E501
            number (bool): [optional]  # noqa: E501
            object (bool): [optional]  # noqa: E501
            pojo (bool): [optional]  # noqa: E501
            short (bool): [optional]  # noqa: E501
            textual (bool): [optional]  # noqa: E501
            value_node (bool): [optional]  # noqa: E501
        """

        self._data_store = {}
        self._check_type = _check_type
        self._from_server = _from_server
        self._path_to_item = _path_to_item
        self._configuration = _configuration

        for var_name, var_value in six.iteritems(kwargs):
            if (
                var_name not in self.attribute_map
                and self._configuration is not None
                and self._configuration.discard_unknown_keys
                and self.additional_properties_type is None
            ):
                # discard variable.
                continue
            setattr(self, var_name, var_value)

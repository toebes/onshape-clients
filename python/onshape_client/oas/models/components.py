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


class Components(object):
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
        'schemas': 'dict(str, Schema)',
        'responses': 'dict(str, ApiResponse)',
        'parameters': 'dict(str, Parameter)',
        'examples': 'dict(str, Example)',
        'request_bodies': 'dict(str, RequestBody)',
        'headers': 'dict(str, Header)',
        'security_schemes': 'dict(str, SecurityScheme)',
        'links': 'dict(str, Link)',
        'callbacks': 'dict(str, Callback)',
        'extensions': 'dict(str, object)'
    }

    attribute_map = {
        'schemas': 'schemas',
        'responses': 'responses',
        'parameters': 'parameters',
        'examples': 'examples',
        'request_bodies': 'requestBodies',
        'headers': 'headers',
        'security_schemes': 'securitySchemes',
        'links': 'links',
        'callbacks': 'callbacks',
        'extensions': 'extensions'
    }

    def __init__(self, schemas=None, responses=None, parameters=None, examples=None, request_bodies=None, headers=None, security_schemes=None, links=None, callbacks=None, extensions=None):  # noqa: E501
        """Components - a model defined in OpenAPI"""  # noqa: E501

        self._schemas = None
        self._responses = None
        self._parameters = None
        self._examples = None
        self._request_bodies = None
        self._headers = None
        self._security_schemes = None
        self._links = None
        self._callbacks = None
        self._extensions = None
        self.discriminator = None

        if schemas is not None:
            self.schemas = schemas
        if responses is not None:
            self.responses = responses
        if parameters is not None:
            self.parameters = parameters
        if examples is not None:
            self.examples = examples
        if request_bodies is not None:
            self.request_bodies = request_bodies
        if headers is not None:
            self.headers = headers
        if security_schemes is not None:
            self.security_schemes = security_schemes
        if links is not None:
            self.links = links
        if callbacks is not None:
            self.callbacks = callbacks
        if extensions is not None:
            self.extensions = extensions

    @property
    def schemas(self):
        """Gets the schemas of this Components.  # noqa: E501


        :return: The schemas of this Components.  # noqa: E501
        :rtype: dict(str, Schema)
        """
        return self._schemas

    @schemas.setter
    def schemas(self, schemas):
        """Sets the schemas of this Components.


        :param schemas: The schemas of this Components.  # noqa: E501
        :type: dict(str, Schema)
        """

        self._schemas = schemas

    @property
    def responses(self):
        """Gets the responses of this Components.  # noqa: E501


        :return: The responses of this Components.  # noqa: E501
        :rtype: dict(str, ApiResponse)
        """
        return self._responses

    @responses.setter
    def responses(self, responses):
        """Sets the responses of this Components.


        :param responses: The responses of this Components.  # noqa: E501
        :type: dict(str, ApiResponse)
        """

        self._responses = responses

    @property
    def parameters(self):
        """Gets the parameters of this Components.  # noqa: E501


        :return: The parameters of this Components.  # noqa: E501
        :rtype: dict(str, Parameter)
        """
        return self._parameters

    @parameters.setter
    def parameters(self, parameters):
        """Sets the parameters of this Components.


        :param parameters: The parameters of this Components.  # noqa: E501
        :type: dict(str, Parameter)
        """

        self._parameters = parameters

    @property
    def examples(self):
        """Gets the examples of this Components.  # noqa: E501


        :return: The examples of this Components.  # noqa: E501
        :rtype: dict(str, Example)
        """
        return self._examples

    @examples.setter
    def examples(self, examples):
        """Sets the examples of this Components.


        :param examples: The examples of this Components.  # noqa: E501
        :type: dict(str, Example)
        """

        self._examples = examples

    @property
    def request_bodies(self):
        """Gets the request_bodies of this Components.  # noqa: E501


        :return: The request_bodies of this Components.  # noqa: E501
        :rtype: dict(str, RequestBody)
        """
        return self._request_bodies

    @request_bodies.setter
    def request_bodies(self, request_bodies):
        """Sets the request_bodies of this Components.


        :param request_bodies: The request_bodies of this Components.  # noqa: E501
        :type: dict(str, RequestBody)
        """

        self._request_bodies = request_bodies

    @property
    def headers(self):
        """Gets the headers of this Components.  # noqa: E501


        :return: The headers of this Components.  # noqa: E501
        :rtype: dict(str, Header)
        """
        return self._headers

    @headers.setter
    def headers(self, headers):
        """Sets the headers of this Components.


        :param headers: The headers of this Components.  # noqa: E501
        :type: dict(str, Header)
        """

        self._headers = headers

    @property
    def security_schemes(self):
        """Gets the security_schemes of this Components.  # noqa: E501


        :return: The security_schemes of this Components.  # noqa: E501
        :rtype: dict(str, SecurityScheme)
        """
        return self._security_schemes

    @security_schemes.setter
    def security_schemes(self, security_schemes):
        """Sets the security_schemes of this Components.


        :param security_schemes: The security_schemes of this Components.  # noqa: E501
        :type: dict(str, SecurityScheme)
        """

        self._security_schemes = security_schemes

    @property
    def links(self):
        """Gets the links of this Components.  # noqa: E501


        :return: The links of this Components.  # noqa: E501
        :rtype: dict(str, Link)
        """
        return self._links

    @links.setter
    def links(self, links):
        """Sets the links of this Components.


        :param links: The links of this Components.  # noqa: E501
        :type: dict(str, Link)
        """

        self._links = links

    @property
    def callbacks(self):
        """Gets the callbacks of this Components.  # noqa: E501


        :return: The callbacks of this Components.  # noqa: E501
        :rtype: dict(str, Callback)
        """
        return self._callbacks

    @callbacks.setter
    def callbacks(self, callbacks):
        """Sets the callbacks of this Components.


        :param callbacks: The callbacks of this Components.  # noqa: E501
        :type: dict(str, Callback)
        """

        self._callbacks = callbacks

    @property
    def extensions(self):
        """Gets the extensions of this Components.  # noqa: E501


        :return: The extensions of this Components.  # noqa: E501
        :rtype: dict(str, object)
        """
        return self._extensions

    @extensions.setter
    def extensions(self, extensions):
        """Sets the extensions of this Components.


        :param extensions: The extensions of this Components.  # noqa: E501
        :type: dict(str, object)
        """

        self._extensions = extensions

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
        if not isinstance(other, Components):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

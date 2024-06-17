# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_package:srv/RobotCall.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotCall_Request(type):
    """Metaclass of message 'RobotCall_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_package.srv.RobotCall_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_call__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_call__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_call__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_call__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_call__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCall_Request(metaclass=Metaclass_RobotCall_Request):
    """Message class 'RobotCall_Request'."""

    __slots__ = [
        '_order_id',
        '_store_id',
        '_kiosk_id',
        '_uid',
        '_robot_id',
    ]

    _fields_and_field_types = {
        'order_id': 'string',
        'store_id': 'string',
        'kiosk_id': 'string',
        'uid': 'string',
        'robot_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.order_id = kwargs.get('order_id', str())
        self.store_id = kwargs.get('store_id', str())
        self.kiosk_id = kwargs.get('kiosk_id', str())
        self.uid = kwargs.get('uid', str())
        self.robot_id = kwargs.get('robot_id', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.order_id != other.order_id:
            return False
        if self.store_id != other.store_id:
            return False
        if self.kiosk_id != other.kiosk_id:
            return False
        if self.uid != other.uid:
            return False
        if self.robot_id != other.robot_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def order_id(self):
        """Message field 'order_id'."""
        return self._order_id

    @order_id.setter
    def order_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'order_id' field must be of type 'str'"
        self._order_id = value

    @builtins.property
    def store_id(self):
        """Message field 'store_id'."""
        return self._store_id

    @store_id.setter
    def store_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'store_id' field must be of type 'str'"
        self._store_id = value

    @builtins.property
    def kiosk_id(self):
        """Message field 'kiosk_id'."""
        return self._kiosk_id

    @kiosk_id.setter
    def kiosk_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'kiosk_id' field must be of type 'str'"
        self._kiosk_id = value

    @builtins.property
    def uid(self):
        """Message field 'uid'."""
        return self._uid

    @uid.setter
    def uid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'uid' field must be of type 'str'"
        self._uid = value

    @builtins.property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_id' field must be of type 'str'"
        self._robot_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotCall_Response(type):
    """Metaclass of message 'RobotCall_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_package.srv.RobotCall_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_call__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_call__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_call__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_call__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_call__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCall_Response(metaclass=Metaclass_RobotCall_Response):
    """Message class 'RobotCall_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_RobotCall(type):
    """Metaclass of service 'RobotCall'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_package.srv.RobotCall')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robot_call

            from interface_package.srv import _robot_call
            if _robot_call.Metaclass_RobotCall_Request._TYPE_SUPPORT is None:
                _robot_call.Metaclass_RobotCall_Request.__import_type_support__()
            if _robot_call.Metaclass_RobotCall_Response._TYPE_SUPPORT is None:
                _robot_call.Metaclass_RobotCall_Response.__import_type_support__()


class RobotCall(metaclass=Metaclass_RobotCall):
    from interface_package.srv._robot_call import RobotCall_Request as Request
    from interface_package.srv._robot_call import RobotCall_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

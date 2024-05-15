__debug = False


def debug() -> bool:
    return __debug


def set_debug(value: bool) -> None:
    global __debug
    __debug = value

#if defined(Hiro_Sizable)

namespace hiro {

auto pSizable::construct() -> void {
}

auto pSizable::destruct() -> void {
}

auto pSizable::minimumSize() const -> Size {
  return {0, 0};
}

auto pSizable::setCollapsible(bool collapsible) -> void {
}

auto pSizable::setGeometry(Geometry geometry) -> void {
  self().doSize();
}

}

#endif

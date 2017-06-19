// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_OMAP_RANGELIBC_H_
#define FLATBUFFERS_GENERATED_OMAP_RANGELIBC_H_

#include "flatbuffers/flatbuffers.h"

namespace rangelibc {

struct Simple;
struct SimpleT;

struct Omap;
struct OmapT;

struct DistanceTransform;
struct DistanceTransformT;

struct RM;
struct RMT;

struct SimpleT : public flatbuffers::NativeTable {
  typedef Simple TableType;
  uint32_t width;
  uint32_t height;
  SimpleT()
      : width(0),
        height(0) {
  }
};

struct Simple FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef SimpleT NativeTableType;
  enum {
    VT_WIDTH = 4,
    VT_HEIGHT = 6
  };
  uint32_t width() const {
    return GetField<uint32_t>(VT_WIDTH, 0);
  }
  uint32_t height() const {
    return GetField<uint32_t>(VT_HEIGHT, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_WIDTH) &&
           VerifyField<uint32_t>(verifier, VT_HEIGHT) &&
           verifier.EndTable();
  }
  SimpleT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(SimpleT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Simple> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SimpleT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct SimpleBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_width(uint32_t width) {
    fbb_.AddElement<uint32_t>(Simple::VT_WIDTH, width, 0);
  }
  void add_height(uint32_t height) {
    fbb_.AddElement<uint32_t>(Simple::VT_HEIGHT, height, 0);
  }
  SimpleBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SimpleBuilder &operator=(const SimpleBuilder &);
  flatbuffers::Offset<Simple> Finish() {
    const auto end = fbb_.EndTable(start_, 2);
    auto o = flatbuffers::Offset<Simple>(end);
    return o;
  }
};

inline flatbuffers::Offset<Simple> CreateSimple(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t width = 0,
    uint32_t height = 0) {
  SimpleBuilder builder_(_fbb);
  builder_.add_height(height);
  builder_.add_width(width);
  return builder_.Finish();
}

flatbuffers::Offset<Simple> CreateSimple(flatbuffers::FlatBufferBuilder &_fbb, const SimpleT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct OmapT : public flatbuffers::NativeTable {
  typedef Omap TableType;
  uint32_t width;
  uint32_t height;
  std::vector<uint8_t> grid;
  OmapT()
      : width(0),
        height(0) {
  }
};

struct Omap FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef OmapT NativeTableType;
  enum {
    VT_WIDTH = 4,
    VT_HEIGHT = 6,
    VT_GRID = 8
  };
  uint32_t width() const {
    return GetField<uint32_t>(VT_WIDTH, 0);
  }
  uint32_t height() const {
    return GetField<uint32_t>(VT_HEIGHT, 0);
  }
  const flatbuffers::Vector<uint8_t> *grid() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_GRID);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_WIDTH) &&
           VerifyField<uint32_t>(verifier, VT_HEIGHT) &&
           VerifyOffset(verifier, VT_GRID) &&
           verifier.Verify(grid()) &&
           verifier.EndTable();
  }
  OmapT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(OmapT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Omap> Pack(flatbuffers::FlatBufferBuilder &_fbb, const OmapT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct OmapBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_width(uint32_t width) {
    fbb_.AddElement<uint32_t>(Omap::VT_WIDTH, width, 0);
  }
  void add_height(uint32_t height) {
    fbb_.AddElement<uint32_t>(Omap::VT_HEIGHT, height, 0);
  }
  void add_grid(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> grid) {
    fbb_.AddOffset(Omap::VT_GRID, grid);
  }
  OmapBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  OmapBuilder &operator=(const OmapBuilder &);
  flatbuffers::Offset<Omap> Finish() {
    const auto end = fbb_.EndTable(start_, 3);
    auto o = flatbuffers::Offset<Omap>(end);
    return o;
  }
};

inline flatbuffers::Offset<Omap> CreateOmap(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t width = 0,
    uint32_t height = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> grid = 0) {
  OmapBuilder builder_(_fbb);
  builder_.add_grid(grid);
  builder_.add_height(height);
  builder_.add_width(width);
  return builder_.Finish();
}

inline flatbuffers::Offset<Omap> CreateOmapDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t width = 0,
    uint32_t height = 0,
    const std::vector<uint8_t> *grid = nullptr) {
  return rangelibc::CreateOmap(
      _fbb,
      width,
      height,
      grid ? _fbb.CreateVector<uint8_t>(*grid) : 0);
}

flatbuffers::Offset<Omap> CreateOmap(flatbuffers::FlatBufferBuilder &_fbb, const OmapT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct DistanceTransformT : public flatbuffers::NativeTable {
  typedef DistanceTransform TableType;
  uint32_t width;
  uint32_t height;
  std::vector<float> grid;
  DistanceTransformT()
      : width(0),
        height(0) {
  }
};

struct DistanceTransform FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef DistanceTransformT NativeTableType;
  enum {
    VT_WIDTH = 4,
    VT_HEIGHT = 6,
    VT_GRID = 8
  };
  uint32_t width() const {
    return GetField<uint32_t>(VT_WIDTH, 0);
  }
  uint32_t height() const {
    return GetField<uint32_t>(VT_HEIGHT, 0);
  }
  const flatbuffers::Vector<float> *grid() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_GRID);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_WIDTH) &&
           VerifyField<uint32_t>(verifier, VT_HEIGHT) &&
           VerifyOffset(verifier, VT_GRID) &&
           verifier.Verify(grid()) &&
           verifier.EndTable();
  }
  DistanceTransformT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(DistanceTransformT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<DistanceTransform> Pack(flatbuffers::FlatBufferBuilder &_fbb, const DistanceTransformT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct DistanceTransformBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_width(uint32_t width) {
    fbb_.AddElement<uint32_t>(DistanceTransform::VT_WIDTH, width, 0);
  }
  void add_height(uint32_t height) {
    fbb_.AddElement<uint32_t>(DistanceTransform::VT_HEIGHT, height, 0);
  }
  void add_grid(flatbuffers::Offset<flatbuffers::Vector<float>> grid) {
    fbb_.AddOffset(DistanceTransform::VT_GRID, grid);
  }
  DistanceTransformBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DistanceTransformBuilder &operator=(const DistanceTransformBuilder &);
  flatbuffers::Offset<DistanceTransform> Finish() {
    const auto end = fbb_.EndTable(start_, 3);
    auto o = flatbuffers::Offset<DistanceTransform>(end);
    return o;
  }
};

inline flatbuffers::Offset<DistanceTransform> CreateDistanceTransform(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t width = 0,
    uint32_t height = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> grid = 0) {
  DistanceTransformBuilder builder_(_fbb);
  builder_.add_grid(grid);
  builder_.add_height(height);
  builder_.add_width(width);
  return builder_.Finish();
}

inline flatbuffers::Offset<DistanceTransform> CreateDistanceTransformDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t width = 0,
    uint32_t height = 0,
    const std::vector<float> *grid = nullptr) {
  return rangelibc::CreateDistanceTransform(
      _fbb,
      width,
      height,
      grid ? _fbb.CreateVector<float>(*grid) : 0);
}

flatbuffers::Offset<DistanceTransform> CreateDistanceTransform(flatbuffers::FlatBufferBuilder &_fbb, const DistanceTransformT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct RMT : public flatbuffers::NativeTable {
  typedef RM TableType;
  float maxrange;
  float distThreshold;
  float step_coeff;
  RMT()
      : maxrange(0.0f),
        distThreshold(0.0f),
        step_coeff(0.0f) {
  }
};

struct RM FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef RMT NativeTableType;
  enum {
    VT_MAXRANGE = 4,
    VT_DISTTHRESHOLD = 6,
    VT_STEP_COEFF = 8
  };
  float maxrange() const {
    return GetField<float>(VT_MAXRANGE, 0.0f);
  }
  float distThreshold() const {
    return GetField<float>(VT_DISTTHRESHOLD, 0.0f);
  }
  float step_coeff() const {
    return GetField<float>(VT_STEP_COEFF, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_MAXRANGE) &&
           VerifyField<float>(verifier, VT_DISTTHRESHOLD) &&
           VerifyField<float>(verifier, VT_STEP_COEFF) &&
           verifier.EndTable();
  }
  RMT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(RMT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<RM> Pack(flatbuffers::FlatBufferBuilder &_fbb, const RMT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct RMBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_maxrange(float maxrange) {
    fbb_.AddElement<float>(RM::VT_MAXRANGE, maxrange, 0.0f);
  }
  void add_distThreshold(float distThreshold) {
    fbb_.AddElement<float>(RM::VT_DISTTHRESHOLD, distThreshold, 0.0f);
  }
  void add_step_coeff(float step_coeff) {
    fbb_.AddElement<float>(RM::VT_STEP_COEFF, step_coeff, 0.0f);
  }
  RMBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  RMBuilder &operator=(const RMBuilder &);
  flatbuffers::Offset<RM> Finish() {
    const auto end = fbb_.EndTable(start_, 3);
    auto o = flatbuffers::Offset<RM>(end);
    return o;
  }
};

inline flatbuffers::Offset<RM> CreateRM(
    flatbuffers::FlatBufferBuilder &_fbb,
    float maxrange = 0.0f,
    float distThreshold = 0.0f,
    float step_coeff = 0.0f) {
  RMBuilder builder_(_fbb);
  builder_.add_step_coeff(step_coeff);
  builder_.add_distThreshold(distThreshold);
  builder_.add_maxrange(maxrange);
  return builder_.Finish();
}

flatbuffers::Offset<RM> CreateRM(flatbuffers::FlatBufferBuilder &_fbb, const RMT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline SimpleT *Simple::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new SimpleT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void Simple::UnPackTo(SimpleT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = width(); _o->width = _e; };
  { auto _e = height(); _o->height = _e; };
}

inline flatbuffers::Offset<Simple> Simple::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SimpleT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateSimple(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Simple> CreateSimple(flatbuffers::FlatBufferBuilder &_fbb, const SimpleT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  auto _width = _o->width;
  auto _height = _o->height;
  return rangelibc::CreateSimple(
      _fbb,
      _width,
      _height);
}

inline OmapT *Omap::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new OmapT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void Omap::UnPackTo(OmapT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = width(); _o->width = _e; };
  { auto _e = height(); _o->height = _e; };
  { auto _e = grid(); if (_e) { _o->grid.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->grid[_i] = _e->Get(_i); } } };
}

inline flatbuffers::Offset<Omap> Omap::Pack(flatbuffers::FlatBufferBuilder &_fbb, const OmapT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateOmap(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Omap> CreateOmap(flatbuffers::FlatBufferBuilder &_fbb, const OmapT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  auto _width = _o->width;
  auto _height = _o->height;
  auto _grid = _o->grid.size() ? _fbb.CreateVector(_o->grid) : 0;
  return rangelibc::CreateOmap(
      _fbb,
      _width,
      _height,
      _grid);
}

inline DistanceTransformT *DistanceTransform::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new DistanceTransformT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void DistanceTransform::UnPackTo(DistanceTransformT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = width(); _o->width = _e; };
  { auto _e = height(); _o->height = _e; };
  { auto _e = grid(); if (_e) { _o->grid.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->grid[_i] = _e->Get(_i); } } };
}

inline flatbuffers::Offset<DistanceTransform> DistanceTransform::Pack(flatbuffers::FlatBufferBuilder &_fbb, const DistanceTransformT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateDistanceTransform(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<DistanceTransform> CreateDistanceTransform(flatbuffers::FlatBufferBuilder &_fbb, const DistanceTransformT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  auto _width = _o->width;
  auto _height = _o->height;
  auto _grid = _o->grid.size() ? _fbb.CreateVector(_o->grid) : 0;
  return rangelibc::CreateDistanceTransform(
      _fbb,
      _width,
      _height,
      _grid);
}

inline RMT *RM::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new RMT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void RM::UnPackTo(RMT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = maxrange(); _o->maxrange = _e; };
  { auto _e = distThreshold(); _o->distThreshold = _e; };
  { auto _e = step_coeff(); _o->step_coeff = _e; };
}

inline flatbuffers::Offset<RM> RM::Pack(flatbuffers::FlatBufferBuilder &_fbb, const RMT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateRM(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<RM> CreateRM(flatbuffers::FlatBufferBuilder &_fbb, const RMT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  auto _maxrange = _o->maxrange;
  auto _distThreshold = _o->distThreshold;
  auto _step_coeff = _o->step_coeff;
  return rangelibc::CreateRM(
      _fbb,
      _maxrange,
      _distThreshold,
      _step_coeff);
}

inline const rangelibc::RM *GetRM(const void *buf) {
  return flatbuffers::GetRoot<rangelibc::RM>(buf);
}

inline bool VerifyRMBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<rangelibc::RM>(nullptr);
}

inline void FinishRMBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<rangelibc::RM> root) {
  fbb.Finish(root);
}

inline std::unique_ptr<RMT> UnPackRM(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<RMT>(GetRM(buf)->UnPack(res));
}

}  // namespace rangelibc

#endif  // FLATBUFFERS_GENERATED_OMAP_RANGELIBC_H_

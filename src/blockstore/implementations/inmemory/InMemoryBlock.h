#pragma once
#ifndef BLOCKSTORE_IMPLEMENTATIONS_INMEMORY_INMEMORYBLOCK_H_
#define BLOCKSTORE_IMPLEMENTATIONS_INMEMORY_INMEMORYBLOCK_H_

#include <blockstore/interface/Block.h>
#include <blockstore/utils/Data.h>

namespace blockstore {
namespace inmemory {
class InMemoryBlockStore;

class InMemoryBlock: public Block {
public:
  InMemoryBlock(size_t size);
  InMemoryBlock(const InMemoryBlock &rhs);
  virtual ~InMemoryBlock();

  void *data() override;
  const void *data() const override;

  void flush() override;

  size_t size() const override;

private:
  std::shared_ptr<Data> _data;
};

}
}

#endif

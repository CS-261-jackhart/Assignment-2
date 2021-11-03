#ifndef __DYNARRAY_H
#define __DYNARRAY_H

struct dynarray {
  void** data;
  int size;
  int capacity;
  int start;
};

struct dynarray* dynarray_create();
void dynarray_free(struct dynarray* da);
int dynarray_size(struct dynarray* da);
int dynarray_capacity(struct dynarray* da);
void dynarray_insert(struct dynarray* da, void* val);
void dynarray_remove(struct dynarray* da, int idx);
void* dynarray_get(struct dynarray* da, int idx);
void dynarray_set(struct dynarray* da, int idx, void* val);
int dynarray_logical_index(struct dynarray* da, int idx);
void dynarray_resize(struct dynarray* da, int new_capacity);

#endif
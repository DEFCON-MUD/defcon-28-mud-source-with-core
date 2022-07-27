inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 4, 2 }));
  set_short( "Passage - x21y4z2" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y4z2.c",
  "north" : DIR+"/rooms/x21y5z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}

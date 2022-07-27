inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 38, 6 }));
  set_short( "Corridor - x15y38z6" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y38z6.c",
  "north" : DIR+"/rooms/x15y39z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}

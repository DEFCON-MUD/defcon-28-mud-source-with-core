inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 62, 1 }));
  set_short( "Corridor - x22y62z1" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y62z1.c",
  "east" : DIR+"/rooms/x23y62z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

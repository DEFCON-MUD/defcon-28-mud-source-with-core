inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 48, 1 }));
  set_short( "Corridor - x27y48z1" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y49z1.c",
  "south" : DIR+"/rooms/x27y47z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

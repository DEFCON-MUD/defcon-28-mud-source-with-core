inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 33, 3 }));
  set_short( "Hallway - x45y33z3" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y34z3.c",
  "south" : DIR+"/rooms/x45y32z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

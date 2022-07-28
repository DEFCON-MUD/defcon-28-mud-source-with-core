inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 26, 3 }));
  set_short( "Hallway - x17y26z3" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y26z3.c",
  "south" : DIR+"/rooms/x17y25z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 8, 3 }));
  set_short( "Hallway - x59y8z3" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y8z3.c",
  "south" : DIR+"/rooms/x59y7z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 34, 1 }));
  set_short( "Corridor - x25y34z1" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y34z1.c",
  "south" : DIR+"/rooms/x25y33z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}

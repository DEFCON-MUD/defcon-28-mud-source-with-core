inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 59, 7 }));
  set_short( "Hallway - x61y59z7" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y60z7.c",
  "south" : DIR+"/rooms/x61y58z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

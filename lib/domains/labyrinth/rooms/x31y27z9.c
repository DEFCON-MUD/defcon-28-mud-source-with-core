inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 27, 9 }));
  set_short( "Hallway - x31y27z9" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y28z9.c",
  "south" : DIR+"/rooms/x31y26z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

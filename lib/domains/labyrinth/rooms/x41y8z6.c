inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 8, 6 }));
  set_short( "Hallway - x41y8z6" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y9z6.c",
  "south" : DIR+"/rooms/x41y7z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 61, 8 }));
  set_short( "Corridor - x57y61z8" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y62z8.c",
  "south" : DIR+"/rooms/x57y60z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

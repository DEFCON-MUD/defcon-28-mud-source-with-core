inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 42, 9 }));
  set_short( "Hallway - x23y42z9" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y43z9.c",
  "south" : DIR+"/rooms/x23y41z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

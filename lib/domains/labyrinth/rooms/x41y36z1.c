inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 36, 1 }));
  set_short( "Passage - x41y36z1" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y36z1.c",
  "south" : DIR+"/rooms/x41y35z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}

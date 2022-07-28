inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 28, 7 }));
  set_short( "Passage - x43y28z7" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y28z7.c",
  "north" : DIR+"/rooms/x43y29z7.c",
  "south" : DIR+"/rooms/x43y27z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}

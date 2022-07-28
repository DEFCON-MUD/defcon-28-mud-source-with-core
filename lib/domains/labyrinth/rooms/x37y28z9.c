inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 28, 9 }));
  set_short( "Hallway - x37y28z9" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y28z9.c",
  "north" : DIR+"/rooms/x37y29z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}

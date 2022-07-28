inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 5 }));
  set_short( "Passage - x7y58z5" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y58z5.c",
  "south" : DIR+"/rooms/x7y57z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}

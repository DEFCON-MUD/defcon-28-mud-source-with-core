inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 29, 9 }));
  set_short( "Corridor - x51y29z9" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y30z9.c",
  "south" : DIR+"/rooms/x51y28z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

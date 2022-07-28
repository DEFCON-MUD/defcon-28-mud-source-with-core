inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 29, 5 }));
  set_short( "Corridor - x25y29z5" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y30z5.c",
  "south" : DIR+"/rooms/x25y28z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

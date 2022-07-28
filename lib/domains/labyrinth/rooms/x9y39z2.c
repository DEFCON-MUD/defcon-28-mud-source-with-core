inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 39, 2 }));
  set_short( "Corridor - x9y39z2" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y40z2.c",
  "south" : DIR+"/rooms/x9y38z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

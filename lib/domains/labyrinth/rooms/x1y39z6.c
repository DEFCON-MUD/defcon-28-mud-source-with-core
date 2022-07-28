inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 39, 6 }));
  set_short( "Hallway - x1y39z6" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y40z6.c",
  "south" : DIR+"/rooms/x1y38z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

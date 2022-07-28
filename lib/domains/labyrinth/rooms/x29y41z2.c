inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 41, 2 }));
  set_short( "Hallway - x29y41z2" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y42z2.c",
  "south" : DIR+"/rooms/x29y40z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

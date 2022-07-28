inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 56, 7 }));
  set_short( "Hallway - x45y56z7" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y56z7.c",
  "north" : DIR+"/rooms/x45y57z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}

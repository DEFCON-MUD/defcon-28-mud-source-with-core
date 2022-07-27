inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 36, 2 }));
  set_short( "Hallway - x51y36z2" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y36z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}

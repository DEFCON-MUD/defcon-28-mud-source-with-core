inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 58, 0 }));
  set_short( "Hallway - x33y58z0" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y58z0.c",
  "north" : DIR+"/rooms/x33y59z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}

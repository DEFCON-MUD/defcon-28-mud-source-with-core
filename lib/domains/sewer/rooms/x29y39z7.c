inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 39, 7 }));
  set_short( "Corridor - x29y39z7" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y40z7.c",
  "south" : DIR+"/rooms/x29y38z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

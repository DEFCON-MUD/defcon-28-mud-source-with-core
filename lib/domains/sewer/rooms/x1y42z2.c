inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 42, 2 }));
  set_short( "Hallway - x1y42z2" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y42z2.c",
  "north" : DIR+"/rooms/x1y43z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}

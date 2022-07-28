inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 17, 5 }));
  set_short( "Corridor - x7y17z5" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y18z5.c",
  "south" : DIR+"/rooms/x7y16z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

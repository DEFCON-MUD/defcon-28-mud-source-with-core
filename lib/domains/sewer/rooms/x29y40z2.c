inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 40, 2 }));
  set_short( "Hallway - x29y40z2" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y40z2.c",
  "north" : DIR+"/rooms/x29y41z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}

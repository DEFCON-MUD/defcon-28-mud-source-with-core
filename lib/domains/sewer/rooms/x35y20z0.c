inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 20, 0 }));
  set_short( "Hallway - x35y20z0" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y20z0.c",
  "south" : DIR+"/rooms/x35y19z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 53, 0 }));
  set_short( "Corridor - x13y53z0" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y54z0.c",
  "south" : DIR+"/rooms/x13y52z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

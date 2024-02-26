inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 14, 0 }));
  set_short( "Hallway - x61y14z0" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y15z0.c",
  "south" : DIR+"/rooms/x61y13z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 22, 7 }));
  set_short( "Corridor - x31y22z7" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y22z7.c",
  "north" : DIR+"/rooms/x31y23z7.c",
  "south" : DIR+"/rooms/x31y21z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}

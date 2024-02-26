inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 33, 7 }));
  set_short( "Corridor - x29y33z7" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y34z7.c",
  "south" : DIR+"/rooms/x29y32z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 19, 0 }));
  set_short( "Corridor - x17y19z0" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y20z0.c",
  "south" : DIR+"/rooms/x17y18z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

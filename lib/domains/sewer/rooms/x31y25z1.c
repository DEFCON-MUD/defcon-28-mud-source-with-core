inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 25, 1 }));
  set_short( "Hallway - x31y25z1" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y26z1.c",
  "south" : DIR+"/rooms/x31y24z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

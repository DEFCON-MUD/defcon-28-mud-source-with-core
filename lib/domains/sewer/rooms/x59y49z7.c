inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 49, 7 }));
  set_short( "Hallway - x59y49z7" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y50z7.c",
  "south" : DIR+"/rooms/x59y48z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

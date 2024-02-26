inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 18, 8 }));
  set_short( "Hallway - x3y18z8" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y18z8.c",
  "north" : DIR+"/rooms/x3y19z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}

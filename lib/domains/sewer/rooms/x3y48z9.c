inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 48, 9 }));
  set_short( "Hallway - x3y48z9" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y48z9.c",
  "east" : DIR+"/rooms/x4y48z9.c",
  "south" : DIR+"/rooms/x3y47z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}

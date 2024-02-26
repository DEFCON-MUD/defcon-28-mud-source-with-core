inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 6, 1 }));
  set_short( "Hallway - x46y6z1" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y6z1.c",
  "east" : DIR+"/rooms/x47y6z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

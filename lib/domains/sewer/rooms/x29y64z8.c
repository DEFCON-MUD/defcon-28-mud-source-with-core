inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 64, 8 }));
  set_short( "Hallway - x29y64z8" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y64z8.c",
  "east" : DIR+"/rooms/x30y64z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

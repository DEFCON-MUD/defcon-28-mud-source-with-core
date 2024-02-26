inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 32, 0 }));
  set_short( "Corridor - x4y32z0" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y32z0.c",
  "east" : DIR+"/rooms/x5y32z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

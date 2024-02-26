inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 6, 1 }));
  set_short( "Corridor - x8y6z1" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y6z1.c",
  "east" : DIR+"/rooms/x9y6z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

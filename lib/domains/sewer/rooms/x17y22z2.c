inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 2 }));
  set_short( "Corridor - x17y22z2" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y22z2.c",
  "south" : DIR+"/rooms/x17y21z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}

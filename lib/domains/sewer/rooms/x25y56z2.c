inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 56, 2 }));
  set_short( "Corridor - x25y56z2" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y56z2.c",
  "north" : DIR+"/rooms/x25y57z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}

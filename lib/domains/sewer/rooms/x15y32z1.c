inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 32, 1 }));
  set_short( "Corridor - x15y32z1" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y32z1.c",
  "north" : DIR+"/rooms/x15y33z1.c",
  "south" : DIR+"/rooms/x15y31z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}

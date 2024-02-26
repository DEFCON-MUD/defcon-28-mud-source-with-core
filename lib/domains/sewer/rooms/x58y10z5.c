inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 10, 5 }));
  set_short( "Hallway - x58y10z5" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y10z5.c",
  "east" : DIR+"/rooms/x59y10z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

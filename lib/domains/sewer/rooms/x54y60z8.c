inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 60, 8 }));
  set_short( "Hallway - x54y60z8" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y60z8.c",
  "east" : DIR+"/rooms/x55y60z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

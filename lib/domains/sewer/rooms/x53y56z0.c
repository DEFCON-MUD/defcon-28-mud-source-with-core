inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 56, 0 }));
  set_short( "Hallway - x53y56z0" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y56z0.c",
  "south" : DIR+"/rooms/x53y55z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}

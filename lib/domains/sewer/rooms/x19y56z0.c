inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 56, 0 }));
  set_short( "Hallway - x19y56z0" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y56z0.c",
  "south" : DIR+"/rooms/x19y55z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}

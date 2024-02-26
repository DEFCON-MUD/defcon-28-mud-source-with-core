inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 20, 1 }));
  set_short( "Hallway - x53y20z1" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y20z1.c",
  "north" : DIR+"/rooms/x53y21z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}

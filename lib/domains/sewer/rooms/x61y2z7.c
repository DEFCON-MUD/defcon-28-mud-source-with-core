inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 2, 7 }));
  set_short( "Hallway - x61y2z7" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y2z7.c",
  "north" : DIR+"/rooms/x61y3z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}

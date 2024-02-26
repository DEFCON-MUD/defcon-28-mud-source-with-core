inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 12, 1 }));
  set_short( "Hallway - x53y12z1" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y12z1.c",
  "north" : DIR+"/rooms/x53y13z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 39, 6 }));
  set_short( "Hallway - x59y39z6" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y40z6.c",
  "south" : DIR+"/rooms/x59y38z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

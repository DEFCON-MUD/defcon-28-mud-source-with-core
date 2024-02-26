inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 57, 9 }));
  set_short( "Hallway - x49y57z9" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y58z9.c",
  "south" : DIR+"/rooms/x49y56z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 57, 5 }));
  set_short( "Passage - x9y57z5" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y58z5.c",
  "south" : DIR+"/rooms/x9y56z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

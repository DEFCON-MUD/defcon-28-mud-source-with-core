inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 34, 9 }));
  set_short( "Passage - x15y34z9" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y35z9.c",
  "south" : DIR+"/rooms/x15y33z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

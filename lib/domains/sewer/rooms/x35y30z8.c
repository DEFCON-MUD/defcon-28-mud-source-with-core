inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 30, 8 }));
  set_short( "Passage - x35y30z8" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y30z8.c",
  "south" : DIR+"/rooms/x35y29z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}

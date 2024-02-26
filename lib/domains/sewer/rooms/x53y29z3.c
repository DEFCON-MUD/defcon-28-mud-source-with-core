inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 29, 3 }));
  set_short( "Passage - x53y29z3" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y30z3.c",
  "south" : DIR+"/rooms/x53y28z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 38, 3 }));
  set_short( "Corridor - x17y38z3" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y39z3.c",
  "south" : DIR+"/rooms/x17y37z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

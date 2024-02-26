inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 39, 9 }));
  set_short( "Passage - x1y39z9" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y40z9.c",
  "south" : DIR+"/rooms/x1y38z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

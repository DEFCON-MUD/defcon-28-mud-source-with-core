inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 31, 8 }));
  set_short( "Corridor - x59y31z8" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y32z8.c",
  "south" : DIR+"/rooms/x59y30z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

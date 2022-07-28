inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 31, 1 }));
  set_short( "Corridor - x57y31z1" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y32z1.c",
  "south" : DIR+"/rooms/x57y30z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

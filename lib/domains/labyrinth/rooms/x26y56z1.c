inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 56, 1 }));
  set_short( "Corridor - x26y56z1" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y56z1.c",
  "east" : DIR+"/rooms/x27y56z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 22, 3 }));
  set_short( "Passage - x33y22z3" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y22z3.c",
  "east" : DIR+"/rooms/x34y22z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 52, 1 }));
  set_short( "Hallway - x56y52z1" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y52z1.c",
  "east" : DIR+"/rooms/x57y52z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

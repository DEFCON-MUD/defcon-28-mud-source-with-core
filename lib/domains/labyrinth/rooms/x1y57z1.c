inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 57, 1 }));
  set_short( "Hallway - x1y57z1" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y58z1.c",
  "south" : DIR+"/rooms/x1y56z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

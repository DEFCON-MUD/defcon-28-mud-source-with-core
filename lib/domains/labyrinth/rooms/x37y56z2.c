inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 56, 2 }));
  set_short( "Hallway - x37y56z2" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y57z2.c",
  "south" : DIR+"/rooms/x37y55z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

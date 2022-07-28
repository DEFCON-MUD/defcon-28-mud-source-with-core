inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 52, 1 }));
  set_short( "Corridor - x15y52z1" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y52z1.c",
  "south" : DIR+"/rooms/x15y51z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}

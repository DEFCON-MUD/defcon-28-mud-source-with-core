inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 56, 1 }));
  set_short( "Passage - x14y56z1" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y56z1.c",
  "east" : DIR+"/rooms/x15y56z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 56, 8 }));
  set_short( "Hallway - x23y56z8" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y56z8.c",
  "east" : DIR+"/rooms/x24y56z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}

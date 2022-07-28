inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 64, 3 }));
  set_short( "Hallway - x33y64z3" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y64z3.c",
  "east" : DIR+"/rooms/x34y64z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

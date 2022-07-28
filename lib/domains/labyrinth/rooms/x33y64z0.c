inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 64, 0 }));
  set_short( "Hallway - x33y64z0" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y64z0.c",
  "east" : DIR+"/rooms/x34y64z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

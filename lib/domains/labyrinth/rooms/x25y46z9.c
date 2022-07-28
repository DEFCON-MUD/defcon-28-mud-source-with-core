inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 46, 9 }));
  set_short( "Hallway - x25y46z9" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y46z9.c",
  "north" : DIR+"/rooms/x25y47z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}

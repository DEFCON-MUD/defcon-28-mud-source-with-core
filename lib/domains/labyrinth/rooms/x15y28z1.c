inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 28, 1 }));
  set_short( "Corridor - x15y28z1" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y28z1.c",
  "east" : DIR+"/rooms/x16y28z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

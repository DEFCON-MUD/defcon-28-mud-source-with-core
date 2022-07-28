inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 22, 5 }));
  set_short( "Corridor - x8y22z5" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y22z5.c",
  "east" : DIR+"/rooms/x9y22z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}

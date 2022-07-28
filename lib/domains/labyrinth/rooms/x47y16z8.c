inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 16, 8 }));
  set_short( "Corridor - x47y16z8" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y17z8.c",
  "south" : DIR+"/rooms/x47y15z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

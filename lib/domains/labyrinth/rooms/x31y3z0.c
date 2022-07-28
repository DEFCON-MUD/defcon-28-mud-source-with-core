inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 3, 0 }));
  set_short( "Passage - x31y3z0" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y4z0.c",
  "south" : DIR+"/rooms/x31y2z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 5 }));
  set_short( "Corridor - x13y16z5" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y16z5.c",
  "south" : DIR+"/rooms/x13y15z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}

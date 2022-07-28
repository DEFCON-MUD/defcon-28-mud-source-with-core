inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 2, 8 }));
  set_short( "Hallway - x6y2z8" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y2z8.c",
  "east" : DIR+"/rooms/x7y2z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}

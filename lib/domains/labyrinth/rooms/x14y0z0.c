inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 0, 0 }));
  set_short( "Hallway - x14y0z0" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y0z0.c",
  "east" : DIR+"/rooms/x15y0z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}

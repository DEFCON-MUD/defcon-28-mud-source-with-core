inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 0 }));
  set_short( "Hallway - x49y16z0" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y16z0.c",
  "north" : DIR+"/rooms/x49y17z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}

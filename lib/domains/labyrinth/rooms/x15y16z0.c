inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 16, 0 }));
  set_short( "Corridor - x15y16z0" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y16z0.c",
  "east" : DIR+"/rooms/x16y16z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}

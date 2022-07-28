inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 34, 0 }));
  set_short( "Corridor - x53y34z0" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y34z0.c",
  "north" : DIR+"/rooms/x53y35z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 2, 0 }));
  set_short( "Passage - x37y2z0" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y2z0.c",
  "east" : DIR+"/rooms/x38y2z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

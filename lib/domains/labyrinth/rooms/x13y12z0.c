inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 12, 0 }));
  set_short( "Corridor - x13y12z0" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y12z0.c",
  "south" : DIR+"/rooms/x13y11z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}

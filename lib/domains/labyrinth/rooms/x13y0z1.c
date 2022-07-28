inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 0, 1 }));
  set_short( "Passage - x13y0z1" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y0z1.c",
  "east" : DIR+"/rooms/x14y0z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

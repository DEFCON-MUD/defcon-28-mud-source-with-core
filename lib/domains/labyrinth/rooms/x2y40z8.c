inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 40, 8 }));
  set_short( "Corridor - x2y40z8" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y40z8.c",
  "east" : DIR+"/rooms/x3y40z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

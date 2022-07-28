inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 0, 5 }));
  set_short( "Hallway - x25y0z5" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y0z5.c",
  "east" : DIR+"/rooms/x26y0z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

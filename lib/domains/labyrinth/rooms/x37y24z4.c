inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 24, 4 }));
  set_short( "Hallway - x37y24z4" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y24z4.c",
  "east" : DIR+"/rooms/x38y24z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

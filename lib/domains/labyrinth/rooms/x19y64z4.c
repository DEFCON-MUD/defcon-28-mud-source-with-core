inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 64, 4 }));
  set_short( "Hallway - x19y64z4" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y64z4.c",
  "east" : DIR+"/rooms/x20y64z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

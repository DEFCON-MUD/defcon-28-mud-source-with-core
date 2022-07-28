inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 0, 2 }));
  set_short( "Hallway - x15y0z2" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y0z2.c",
  "east" : DIR+"/rooms/x16y0z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

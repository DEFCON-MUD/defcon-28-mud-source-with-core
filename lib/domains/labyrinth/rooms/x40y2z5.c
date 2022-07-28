inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 2, 5 }));
  set_short( "Hallway - x40y2z5" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y2z5.c",
  "east" : DIR+"/rooms/x41y2z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

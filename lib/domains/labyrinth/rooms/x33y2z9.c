inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 2, 9 }));
  set_short( "Corridor - x33y2z9" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y2z9.c",
  "east" : DIR+"/rooms/x34y2z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

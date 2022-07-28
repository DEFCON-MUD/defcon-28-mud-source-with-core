inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 64, 7 }));
  set_short( "Hallway - x17y64z7" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y64z7.c",
  "east" : DIR+"/rooms/x18y64z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 24, 9 }));
  set_short( "Hallway - x8y24z9" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y24z9.c",
  "east" : DIR+"/rooms/x9y24z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

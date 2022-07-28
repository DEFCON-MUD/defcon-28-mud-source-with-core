inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 2, 3 }));
  set_short( "Hallway - x12y2z3" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y2z3.c",
  "east" : DIR+"/rooms/x13y2z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

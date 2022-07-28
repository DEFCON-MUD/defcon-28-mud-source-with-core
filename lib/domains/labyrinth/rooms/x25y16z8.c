inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 16, 8 }));
  set_short( "Corridor - x25y16z8" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y16z8.c",
  "east" : DIR+"/rooms/x26y16z8.c",
  "south" : DIR+"/rooms/x25y15z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}

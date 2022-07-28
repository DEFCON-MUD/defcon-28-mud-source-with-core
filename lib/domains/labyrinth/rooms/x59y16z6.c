inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 6 }));
  set_short( "Corridor - x59y16z6" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y16z6.c",
  "east" : DIR+"/rooms/x60y16z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

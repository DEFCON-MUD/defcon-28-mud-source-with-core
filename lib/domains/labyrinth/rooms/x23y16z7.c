inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 16, 7 }));
  set_short( "Corridor - x23y16z7" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y16z7.c",
  "south" : DIR+"/rooms/x23y15z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}

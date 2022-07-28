inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 56, 5 }));
  set_short( "Hallway - x10y56z5" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y56z5.c",
  "east" : DIR+"/rooms/x11y56z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

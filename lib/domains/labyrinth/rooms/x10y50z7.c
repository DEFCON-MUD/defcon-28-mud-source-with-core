inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 50, 7 }));
  set_short( "Hallway - x10y50z7" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y50z7.c",
  "east" : DIR+"/rooms/x11y50z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

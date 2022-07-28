inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 60, 7 }));
  set_short( "Passage - x46y60z7" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y60z7.c",
  "east" : DIR+"/rooms/x47y60z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

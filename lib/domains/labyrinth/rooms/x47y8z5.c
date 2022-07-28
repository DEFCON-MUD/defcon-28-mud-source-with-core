inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 8, 5 }));
  set_short( "Passage - x47y8z5" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y8z5.c",
  "east" : DIR+"/rooms/x48y8z5.c",
  "north" : DIR+"/rooms/x47y9z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}

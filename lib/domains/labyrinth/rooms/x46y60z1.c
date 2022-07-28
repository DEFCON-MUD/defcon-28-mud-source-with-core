inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 60, 1 }));
  set_short( "Passage - x46y60z1" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y60z1.c",
  "east" : DIR+"/rooms/x47y60z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

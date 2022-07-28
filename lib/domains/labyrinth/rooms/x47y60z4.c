inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 60, 4 }));
  set_short( "Hallway - x47y60z4" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y60z4.c",
  "south" : DIR+"/rooms/x47y59z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}

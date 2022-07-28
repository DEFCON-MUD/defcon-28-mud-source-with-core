inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 38, 7 }));
  set_short( "Passage - x51y38z7" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y38z7.c",
  "east" : DIR+"/rooms/x52y38z7.c",
  "north" : DIR+"/rooms/x51y39z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}

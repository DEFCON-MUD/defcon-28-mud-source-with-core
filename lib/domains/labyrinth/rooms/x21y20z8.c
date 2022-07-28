inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 20, 8 }));
  set_short( "Passage - x21y20z8" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y20z8.c",
  "east" : DIR+"/rooms/x22y20z8.c",
  "south" : DIR+"/rooms/x21y19z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}

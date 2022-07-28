inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 4, 1 }));
  set_short( "Passage - x23y4z1" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y4z1.c",
  "south" : DIR+"/rooms/x23y3z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}

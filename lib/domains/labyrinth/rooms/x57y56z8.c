inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 56, 8 }));
  set_short( "Passage - x57y56z8" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y56z8.c",
  "south" : DIR+"/rooms/x57y55z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}

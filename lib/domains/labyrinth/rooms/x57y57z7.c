inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 57, 7 }));
  set_short( "Passage - x57y57z7" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y58z7.c",
  "south" : DIR+"/rooms/x57y56z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

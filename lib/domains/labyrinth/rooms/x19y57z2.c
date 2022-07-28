inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 57, 2 }));
  set_short( "Passage - x19y57z2" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y58z2.c",
  "south" : DIR+"/rooms/x19y56z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

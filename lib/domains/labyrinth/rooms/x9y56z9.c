inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 56, 9 }));
  set_short( "Passage - x9y56z9" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y57z9.c",
  "south" : DIR+"/rooms/x9y55z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

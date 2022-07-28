inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 56, 1 }));
  set_short( "Hallway - x9y56z1" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y57z1.c",
  "south" : DIR+"/rooms/x9y55z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 56, 3 }));
  set_short( "Hallway - x61y56z3" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y57z3.c",
  "south" : DIR+"/rooms/x61y55z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

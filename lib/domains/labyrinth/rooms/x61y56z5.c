inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 56, 5 }));
  set_short( "Passage - x61y56z5" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y57z5.c",
  "south" : DIR+"/rooms/x61y55z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

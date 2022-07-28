inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 42, 6 }));
  set_short( "Hallway - x33y42z6" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y43z6.c",
  "south" : DIR+"/rooms/x33y41z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

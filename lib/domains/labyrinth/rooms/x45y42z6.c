inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 42, 6 }));
  set_short( "Passage - x45y42z6" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y43z6.c",
  "south" : DIR+"/rooms/x45y41z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

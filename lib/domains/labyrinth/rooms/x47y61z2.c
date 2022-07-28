inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 61, 2 }));
  set_short( "Passage - x47y61z2" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y62z2.c",
  "south" : DIR+"/rooms/x47y60z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

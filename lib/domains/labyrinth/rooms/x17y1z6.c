inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 1, 6 }));
  set_short( "Passage - x17y1z6" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y2z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}

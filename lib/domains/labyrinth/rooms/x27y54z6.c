inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 54, 6 }));
  set_short( "Passage - x27y54z6" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y54z6.c",
  "north" : DIR+"/rooms/x27y55z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 12, 7 }));
  set_short( "Passage - x3y12z7" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y12z7.c",
  "south" : DIR+"/rooms/x3y11z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}

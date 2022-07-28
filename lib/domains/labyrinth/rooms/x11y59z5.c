inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 59, 5 }));
  set_short( "Passage - x11y59z5" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y60z5.c",
  "south" : DIR+"/rooms/x11y58z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

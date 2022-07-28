inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 25, 7 }));
  set_short( "Passage - x25y25z7" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y26z7.c",
  "south" : DIR+"/rooms/x25y24z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

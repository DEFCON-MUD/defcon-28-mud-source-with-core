inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 28, 7 }));
  set_short( "Passage - x51y28z7" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y28z7.c",
  "south" : DIR+"/rooms/x51y27z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 37, 0 }));
  set_short( "Passage - x5y37z0" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y38z0.c",
  "south" : DIR+"/rooms/x5y36z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

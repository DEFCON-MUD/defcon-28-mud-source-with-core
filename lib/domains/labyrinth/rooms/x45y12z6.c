inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 12, 6 }));
  set_short( "Passage - x45y12z6" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y13z6.c",
  "south" : DIR+"/rooms/x45y11z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

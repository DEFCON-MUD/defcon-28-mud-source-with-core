inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 35, 1 }));
  set_short( "Corridor - x1y35z1" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y36z1.c",
  "south" : DIR+"/rooms/x1y34z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

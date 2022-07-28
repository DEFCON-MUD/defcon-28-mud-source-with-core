inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 38, 2 }));
  set_short( "Corridor - x21y38z2" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y38z2.c",
  "north" : DIR+"/rooms/x21y39z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}

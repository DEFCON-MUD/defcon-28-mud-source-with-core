inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 27, 4 }));
  set_short( "Corridor - x3y27z4" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y28z4.c",
  "south" : DIR+"/rooms/x3y26z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

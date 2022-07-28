inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 43, 2 }));
  set_short( "Corridor - x25y43z2" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y44z2.c",
  "south" : DIR+"/rooms/x25y42z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

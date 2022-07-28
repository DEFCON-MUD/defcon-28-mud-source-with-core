inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 2, 2 }));
  set_short( "Corridor - x1y2z2" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y2z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}

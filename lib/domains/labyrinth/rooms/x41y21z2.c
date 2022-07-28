inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 21, 2 }));
  set_short( "Corridor - x41y21z2" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y22z2.c",
  "south" : DIR+"/rooms/x41y20z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

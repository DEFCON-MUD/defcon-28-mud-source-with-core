inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 22, 2 }));
  set_short( "Corridor - x3y22z2" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y22z2.c",
  "south" : DIR+"/rooms/x3y21z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 50, 1 }));
  set_short( "Corridor - x44y50z1" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y50z1.c",
  "east" : DIR+"/rooms/x45y50z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

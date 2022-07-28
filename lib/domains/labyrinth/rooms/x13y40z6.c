inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 40, 6 }));
  set_short( "Hallway - x13y40z6" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y40z6.c",
  "north" : DIR+"/rooms/x13y41z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}

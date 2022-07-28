inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 9, 6 }));
  set_short( "Hallway - x17y9z6" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y10z6.c",
  "south" : DIR+"/rooms/x17y8z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

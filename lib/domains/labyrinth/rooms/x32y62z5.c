inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 62, 5 }));
  set_short( "Corridor - x32y62z5" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y62z5.c",
  "east" : DIR+"/rooms/x33y62z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}

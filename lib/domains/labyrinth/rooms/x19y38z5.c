inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 38, 5 }));
  set_short( "Corridor - x19y38z5" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y38z5.c",
  "south" : DIR+"/rooms/x19y37z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}

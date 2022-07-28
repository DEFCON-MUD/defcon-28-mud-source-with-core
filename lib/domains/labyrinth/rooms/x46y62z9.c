inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 62, 9 }));
  set_short( "Corridor - x46y62z9" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y62z9.c",
  "east" : DIR+"/rooms/x47y62z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}

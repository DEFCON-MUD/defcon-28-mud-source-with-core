inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 52, 9 }));
  set_short( "Corridor - x27y52z9" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y52z9.c",
  "south" : DIR+"/rooms/x27y51z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}

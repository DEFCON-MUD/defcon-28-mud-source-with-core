inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 5, 7 }));
  set_short( "Corridor - x47y5z7" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y6z7.c",
  "south" : DIR+"/rooms/x47y4z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

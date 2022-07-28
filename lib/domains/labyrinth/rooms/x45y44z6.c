inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 44, 6 }));
  set_short( "Corridor - x45y44z6" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y44z6.c",
  "east" : DIR+"/rooms/x46y44z6.c",
  "north" : DIR+"/rooms/x45y45z6.c",
  "south" : DIR+"/rooms/x45y43z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}

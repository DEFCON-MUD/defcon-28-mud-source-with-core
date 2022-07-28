inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 44, 4 }));
  set_short( "Corridor - x49y44z4" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y44z4.c",
  "north" : DIR+"/rooms/x49y45z4.c",
  "south" : DIR+"/rooms/x49y43z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}

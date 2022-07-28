inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 48, 9 }));
  set_short( "Passage - x33y48z9" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y48z9.c",
  "north" : DIR+"/rooms/x33y49z9.c",
  "south" : DIR+"/rooms/x33y47z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}

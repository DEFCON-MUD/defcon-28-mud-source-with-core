inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 48, 2 }));
  set_short( "Corridor - x27y48z2" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y48z2.c",
  "north" : DIR+"/rooms/x27y49z2.c",
  "south" : DIR+"/rooms/x27y47z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}

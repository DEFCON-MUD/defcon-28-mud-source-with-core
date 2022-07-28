inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 23, 8 }));
  set_short( "Corridor - x33y23z8" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y24z8.c",
  "south" : DIR+"/rooms/x33y22z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

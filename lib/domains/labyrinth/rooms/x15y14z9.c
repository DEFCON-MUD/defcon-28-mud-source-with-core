inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 14, 9 }));
  set_short( "Passage - x15y14z9" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y14z9.c",
  "north" : DIR+"/rooms/x15y15z9.c",
  "south" : DIR+"/rooms/x15y13z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}

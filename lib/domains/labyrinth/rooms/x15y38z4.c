inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 38, 4 }));
  set_short( "Hallway - x15y38z4" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y38z4.c",
  "east" : DIR+"/rooms/x16y38z4.c",
  "south" : DIR+"/rooms/x15y37z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}

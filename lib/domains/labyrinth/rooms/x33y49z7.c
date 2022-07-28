inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 49, 7 }));
  set_short( "Hallway - x33y49z7" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y50z7.c",
  "south" : DIR+"/rooms/x33y48z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

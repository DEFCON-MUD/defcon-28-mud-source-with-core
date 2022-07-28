inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 40, 0 }));
  set_short( "Corridor - x21y40z0" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y41z0.c",
  "south" : DIR+"/rooms/x21y39z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

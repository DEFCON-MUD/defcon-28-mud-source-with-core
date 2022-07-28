inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 39, 4 }));
  set_short( "Passage - x33y39z4" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y40z4.c",
  "south" : DIR+"/rooms/x33y38z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

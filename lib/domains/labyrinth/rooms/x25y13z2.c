inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 13, 2 }));
  set_short( "Passage - x25y13z2" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y14z2.c",
  "south" : DIR+"/rooms/x25y12z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

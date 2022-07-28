inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 13, 2 }));
  set_short( "Passage - x33y13z2" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y14z2.c",
  "south" : DIR+"/rooms/x33y12z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

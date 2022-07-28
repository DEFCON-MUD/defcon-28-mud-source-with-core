inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 33, 5 }));
  set_short( "Passage - x41y33z5" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y34z5.c",
  "south" : DIR+"/rooms/x41y32z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

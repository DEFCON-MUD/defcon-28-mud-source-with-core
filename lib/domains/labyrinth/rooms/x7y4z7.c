inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 4, 7 }));
  set_short( "Passage - x7y4z7" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y5z7.c",
  "south" : DIR+"/rooms/x7y3z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

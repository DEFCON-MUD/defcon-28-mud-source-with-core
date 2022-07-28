inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 25, 3 }));
  set_short( "Passage - x47y25z3" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y26z3.c",
  "south" : DIR+"/rooms/x47y24z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

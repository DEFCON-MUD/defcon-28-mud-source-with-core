inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 26, 3 }));
  set_short( "Corridor - x37y26z3" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y26z3.c",
  "south" : DIR+"/rooms/x37y25z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}

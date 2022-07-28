inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 48, 3 }));
  set_short( "Passage - x41y48z3" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y48z3.c",
  "north" : DIR+"/rooms/x41y49z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}

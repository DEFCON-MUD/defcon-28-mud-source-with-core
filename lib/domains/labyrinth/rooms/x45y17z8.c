inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 17, 8 }));
  set_short( "Hallway - x45y17z8" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y18z8.c",
  "south" : DIR+"/rooms/x45y16z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

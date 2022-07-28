inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 47, 3 }));
  set_short( "Corridor - x15y47z3" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y48z3.c",
  "south" : DIR+"/rooms/x15y46z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

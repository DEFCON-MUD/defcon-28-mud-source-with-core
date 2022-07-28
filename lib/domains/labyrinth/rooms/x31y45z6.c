inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 45, 6 }));
  set_short( "Hallway - x31y45z6" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y46z6.c",
  "south" : DIR+"/rooms/x31y44z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

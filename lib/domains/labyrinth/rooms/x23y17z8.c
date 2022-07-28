inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 17, 8 }));
  set_short( "Passage - x23y17z8" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y18z8.c",
  "south" : DIR+"/rooms/x23y16z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

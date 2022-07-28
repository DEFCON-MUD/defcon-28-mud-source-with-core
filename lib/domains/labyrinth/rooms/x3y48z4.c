inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 48, 4 }));
  set_short( "Passage - x3y48z4" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y49z4.c",
  "south" : DIR+"/rooms/x3y47z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

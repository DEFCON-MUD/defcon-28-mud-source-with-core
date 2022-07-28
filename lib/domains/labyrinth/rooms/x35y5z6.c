inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 5, 6 }));
  set_short( "Passage - x35y5z6" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y6z6.c",
  "south" : DIR+"/rooms/x35y4z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

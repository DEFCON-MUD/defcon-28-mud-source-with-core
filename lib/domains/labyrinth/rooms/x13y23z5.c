inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 23, 5 }));
  set_short( "Passage - x13y23z5" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y24z5.c",
  "south" : DIR+"/rooms/x13y22z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 23, 2 }));
  set_short( "Hallway - x61y23z2" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y24z2.c",
  "south" : DIR+"/rooms/x61y22z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

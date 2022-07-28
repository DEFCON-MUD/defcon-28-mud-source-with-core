inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 48, 6 }));
  set_short( "Corridor - x33y48z6" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y48z6.c",
  "east" : DIR+"/rooms/x34y48z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

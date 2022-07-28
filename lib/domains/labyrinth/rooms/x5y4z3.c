inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 4, 3 }));
  set_short( "Hallway - x5y4z3" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y4z3.c",
  "north" : DIR+"/rooms/x5y5z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}

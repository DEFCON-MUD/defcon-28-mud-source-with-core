inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 19, 3 }));
  set_short( "Corridor - x13y19z3" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y20z3.c",
  "south" : DIR+"/rooms/x13y18z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

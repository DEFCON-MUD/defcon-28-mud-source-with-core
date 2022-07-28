inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 40, 3 }));
  set_short( "Corridor - x45y40z3" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y40z3.c",
  "south" : DIR+"/rooms/x45y39z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}

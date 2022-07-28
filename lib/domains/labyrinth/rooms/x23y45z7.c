inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 45, 7 }));
  set_short( "Corridor - x23y45z7" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y46z7.c",
  "south" : DIR+"/rooms/x23y44z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

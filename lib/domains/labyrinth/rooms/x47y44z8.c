inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 44, 8 }));
  set_short( "Passage - x47y44z8" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y45z8.c",
  "south" : DIR+"/rooms/x47y43z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

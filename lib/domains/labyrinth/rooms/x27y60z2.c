inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 60, 2 }));
  set_short( "Passage - x27y60z2" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y61z2.c",
  "south" : DIR+"/rooms/x27y59z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

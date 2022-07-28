inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 7, 2 }));
  set_short( "Passage - x27y7z2" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y8z2.c",
  "south" : DIR+"/rooms/x27y6z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

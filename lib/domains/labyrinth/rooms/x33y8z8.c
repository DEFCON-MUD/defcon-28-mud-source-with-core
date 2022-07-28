inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 8, 8 }));
  set_short( "Corridor - x33y8z8" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y8z8.c",
  "south" : DIR+"/rooms/x33y7z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}

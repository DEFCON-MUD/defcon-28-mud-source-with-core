inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 10, 8 }));
  set_short( "Corridor - x3y10z8" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y11z8.c",
  "south" : DIR+"/rooms/x3y9z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

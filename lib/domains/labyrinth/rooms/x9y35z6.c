inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 35, 6 }));
  set_short( "Corridor - x9y35z6" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y36z6.c",
  "south" : DIR+"/rooms/x9y34z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

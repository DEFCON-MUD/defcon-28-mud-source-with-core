inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 54, 1 }));
  set_short( "Passage - x21y54z1" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y54z1.c",
  "north" : DIR+"/rooms/x21y55z1.c",
  "south" : DIR+"/rooms/x21y53z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 52, 2 }));
  set_short( "Passage - x11y52z2" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y53z2.c",
  "south" : DIR+"/rooms/x11y51z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

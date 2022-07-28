inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 43, 9 }));
  set_short( "Passage - x11y43z9" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y44z9.c",
  "south" : DIR+"/rooms/x11y42z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

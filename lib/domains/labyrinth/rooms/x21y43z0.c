inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 43, 0 }));
  set_short( "Passage - x21y43z0" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y44z0.c",
  "south" : DIR+"/rooms/x21y42z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

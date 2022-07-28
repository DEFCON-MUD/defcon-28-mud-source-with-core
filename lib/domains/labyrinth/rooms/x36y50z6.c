inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 50, 6 }));
  set_short( "Passage - x36y50z6" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y50z6.c",
  "east" : DIR+"/rooms/x37y50z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

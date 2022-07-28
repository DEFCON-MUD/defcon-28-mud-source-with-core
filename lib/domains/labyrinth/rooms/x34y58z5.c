inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 58, 5 }));
  set_short( "Passage - x34y58z5" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y58z5.c",
  "east" : DIR+"/rooms/x35y58z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

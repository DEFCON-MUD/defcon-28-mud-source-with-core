inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 56, 8 }));
  set_short( "Corridor - x28y56z8" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y56z8.c",
  "east" : DIR+"/rooms/x29y56z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

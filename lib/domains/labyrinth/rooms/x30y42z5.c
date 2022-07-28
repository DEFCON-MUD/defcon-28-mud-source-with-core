inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 42, 5 }));
  set_short( "Passage - x30y42z5" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y42z5.c",
  "east" : DIR+"/rooms/x31y42z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

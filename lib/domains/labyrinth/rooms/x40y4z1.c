inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 4, 1 }));
  set_short( "Hallway - x40y4z1" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y4z1.c",
  "east" : DIR+"/rooms/x41y4z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 26, 3 }));
  set_short( "Corridor - x19y26z3" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y26z3.c",
  "east" : DIR+"/rooms/x20y26z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

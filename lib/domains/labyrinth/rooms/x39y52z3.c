inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 52, 3 }));
  set_short( "Corridor - x39y52z3" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y52z3.c",
  "east" : DIR+"/rooms/x40y52z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 52, 3 }));
  set_short( "Hallway - x38y52z3" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y52z3.c",
  "east" : DIR+"/rooms/x39y52z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

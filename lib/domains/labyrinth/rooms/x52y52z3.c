inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 52, 3 }));
  set_short( "Corridor - x52y52z3" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y52z3.c",
  "east" : DIR+"/rooms/x53y52z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

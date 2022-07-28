inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 22, 3 }));
  set_short( "Passage - x55y22z3" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y23z3.c",
  "south" : DIR+"/rooms/x55y21z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

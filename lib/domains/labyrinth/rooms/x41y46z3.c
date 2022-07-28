inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 46, 3 }));
  set_short( "Corridor - x41y46z3" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y46z3.c",
  "east" : DIR+"/rooms/x42y46z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

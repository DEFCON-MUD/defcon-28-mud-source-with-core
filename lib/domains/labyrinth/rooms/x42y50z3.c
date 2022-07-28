inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 50, 3 }));
  set_short( "Hallway - x42y50z3" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y50z3.c",
  "east" : DIR+"/rooms/x43y50z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

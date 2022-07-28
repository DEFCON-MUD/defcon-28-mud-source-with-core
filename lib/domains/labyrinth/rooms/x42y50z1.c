inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 50, 1 }));
  set_short( "Corridor - x42y50z1" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y50z1.c",
  "east" : DIR+"/rooms/x43y50z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

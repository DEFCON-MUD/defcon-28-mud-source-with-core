inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 10, 5 }));
  set_short( "Hallway - x20y10z5" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y10z5.c",
  "east" : DIR+"/rooms/x21y10z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

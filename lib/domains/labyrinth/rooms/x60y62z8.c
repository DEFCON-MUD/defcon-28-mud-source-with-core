inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 62, 8 }));
  set_short( "Hallway - x60y62z8" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y62z8.c",
  "east" : DIR+"/rooms/x61y62z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

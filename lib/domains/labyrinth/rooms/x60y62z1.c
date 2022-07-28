inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 62, 1 }));
  set_short( "Hallway - x60y62z1" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y62z1.c",
  "east" : DIR+"/rooms/x61y62z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 58, 2 }));
  set_short( "Corridor - x57y58z2" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y58z2.c",
  "east" : DIR+"/rooms/x58y58z2.c",
  "north" : DIR+"/rooms/x57y59z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}

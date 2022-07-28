inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 20, 9 }));
  set_short( "Hallway - x19y20z9" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y20z9.c",
  "east" : DIR+"/rooms/x20y20z9.c",
  "south" : DIR+"/rooms/x19y19z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 0, 5 }));
  set_short( "Hallway - x53y0z5" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y0z5.c",
  "east" : DIR+"/rooms/x54y0z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 12, 5 }));
  set_short( "Hallway - x39y12z5" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y12z5.c",
  "east" : DIR+"/rooms/x40y12z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

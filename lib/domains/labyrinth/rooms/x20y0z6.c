inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 0, 6 }));
  set_short( "Hallway - x20y0z6" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y0z6.c",
  "east" : DIR+"/rooms/x21y0z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

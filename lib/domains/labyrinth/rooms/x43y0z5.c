inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 0, 5 }));
  set_short( "Hallway - x43y0z5" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y0z5.c",
  "east" : DIR+"/rooms/x44y0z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

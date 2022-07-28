inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 2, 1 }));
  set_short( "Hallway - x60y2z1" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y2z1.c",
  "east" : DIR+"/rooms/x61y2z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 0, 4 }));
  set_short( "Hallway - x18y0z4" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y0z4.c",
  "east" : DIR+"/rooms/x19y0z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

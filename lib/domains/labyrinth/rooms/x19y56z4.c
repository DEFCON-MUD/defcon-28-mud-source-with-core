inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 56, 4 }));
  set_short( "Hallway - x19y56z4" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y56z4.c",
  "east" : DIR+"/rooms/x20y56z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 54, 6 }));
  set_short( "Hallway - x1y54z6" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y55z6.c",
  "south" : DIR+"/rooms/x1y53z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

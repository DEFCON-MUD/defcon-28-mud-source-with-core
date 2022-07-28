inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 27, 2 }));
  set_short( "Passage - x19y27z2" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y28z2.c",
  "south" : DIR+"/rooms/x19y26z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

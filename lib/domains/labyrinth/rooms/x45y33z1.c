inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 33, 1 }));
  set_short( "Passage - x45y33z1" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y34z1.c",
  "south" : DIR+"/rooms/x45y32z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

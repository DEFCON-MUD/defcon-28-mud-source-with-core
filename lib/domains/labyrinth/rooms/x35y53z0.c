inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 53, 0 }));
  set_short( "Hallway - x35y53z0" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y54z0.c",
  "south" : DIR+"/rooms/x35y52z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

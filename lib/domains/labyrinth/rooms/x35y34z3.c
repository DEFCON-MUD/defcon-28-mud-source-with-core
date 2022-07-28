inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 34, 3 }));
  set_short( "Passage - x35y34z3" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y35z3.c",
  "south" : DIR+"/rooms/x35y33z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

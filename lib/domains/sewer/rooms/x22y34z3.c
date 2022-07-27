inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 34, 3 }));
  set_short( "Hallway - x22y34z3" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y34z3.c",
  "east" : DIR+"/rooms/x23y34z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 7, 5 }));
  set_short( "Hallway - x55y7z5" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y8z5.c",
  "south" : DIR+"/rooms/x55y6z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

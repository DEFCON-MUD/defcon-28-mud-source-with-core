inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 26, 3 }));
  set_short( "Corridor - x45y26z3" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y27z3.c",
  "south" : DIR+"/rooms/x45y25z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

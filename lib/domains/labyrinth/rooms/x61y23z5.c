inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 23, 5 }));
  set_short( "Hallway - x61y23z5" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y24z5.c",
  "south" : DIR+"/rooms/x61y22z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

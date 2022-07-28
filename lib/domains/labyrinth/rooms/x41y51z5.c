inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 51, 5 }));
  set_short( "Corridor - x41y51z5" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y52z5.c",
  "south" : DIR+"/rooms/x41y50z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}

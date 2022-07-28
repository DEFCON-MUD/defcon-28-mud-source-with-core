inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 35, 2 }));
  set_short( "Hallway - x3y35z2" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y36z2.c",
  "south" : DIR+"/rooms/x3y34z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 44, 4 }));
  set_short( "Corridor - x41y44z4" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y45z4.c",
  "south" : DIR+"/rooms/x41y43z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

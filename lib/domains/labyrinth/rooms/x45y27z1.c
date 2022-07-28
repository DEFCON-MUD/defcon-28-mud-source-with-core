inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 27, 1 }));
  set_short( "Hallway - x45y27z1" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y28z1.c",
  "south" : DIR+"/rooms/x45y26z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

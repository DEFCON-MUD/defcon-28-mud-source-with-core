inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 6, 4 }));
  set_short( "Hallway - x13y6z4" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y7z4.c",
  "south" : DIR+"/rooms/x13y5z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

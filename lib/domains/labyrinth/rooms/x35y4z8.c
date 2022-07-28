inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 4, 8 }));
  set_short( "Hallway - x35y4z8" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y4z8.c",
  "north" : DIR+"/rooms/x35y5z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}

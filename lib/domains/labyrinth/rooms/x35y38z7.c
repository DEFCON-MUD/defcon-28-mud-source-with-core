inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 7 }));
  set_short( "Passage - x35y38z7" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y38z7.c",
  "east" : DIR+"/rooms/x36y38z7.c",
  "north" : DIR+"/rooms/x35y39z7.c",
  "south" : DIR+"/rooms/x35y37z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}

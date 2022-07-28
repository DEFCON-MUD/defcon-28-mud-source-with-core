inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 59, 4 }));
  set_short( "Hallway - x39y59z4" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y60z4.c",
  "south" : DIR+"/rooms/x39y58z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

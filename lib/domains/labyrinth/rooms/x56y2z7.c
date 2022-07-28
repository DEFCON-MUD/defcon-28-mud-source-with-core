inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 2, 7 }));
  set_short( "Hallway - x56y2z7" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y2z7.c",
  "east" : DIR+"/rooms/x57y2z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

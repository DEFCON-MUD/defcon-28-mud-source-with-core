inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 32, 6 }));
  set_short( "Corridor - x57y32z6" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y32z6.c",
  "east" : DIR+"/rooms/x58y32z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

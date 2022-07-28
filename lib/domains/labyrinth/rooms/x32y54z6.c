inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 54, 6 }));
  set_short( "Passage - x32y54z6" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y54z6.c",
  "east" : DIR+"/rooms/x33y54z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

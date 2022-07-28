inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 62, 6 }));
  set_short( "Passage - x4y62z6" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y62z6.c",
  "east" : DIR+"/rooms/x5y62z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

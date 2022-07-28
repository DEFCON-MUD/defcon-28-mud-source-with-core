inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 62, 9 }));
  set_short( "Corridor - x19y62z9" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y62z9.c",
  "south" : DIR+"/rooms/x19y61z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}

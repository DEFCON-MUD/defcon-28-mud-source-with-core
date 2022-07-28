inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 2, 2 }));
  set_short( "Hallway - x41y2z2" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y2z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}

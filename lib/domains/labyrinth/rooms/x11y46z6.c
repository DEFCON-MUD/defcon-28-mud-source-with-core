inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 46, 6 }));
  set_short( "Hallway - x11y46z6" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y46z6.c",
  "south" : DIR+"/rooms/x11y45z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}

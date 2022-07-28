inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 0, 2 }));
  set_short( "Passage - x31y0z2" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y0z2.c",
  "east" : DIR+"/rooms/x32y0z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 51, 9 }));
  set_short( "Corridor - x31y51z9" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y52z9.c",
  "south" : DIR+"/rooms/x31y50z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

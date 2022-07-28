inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 48, 9 }));
  set_short( "Passage - x15y48z9" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y48z9.c",
  "south" : DIR+"/rooms/x15y47z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}

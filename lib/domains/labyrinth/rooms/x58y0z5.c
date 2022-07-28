inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 0, 5 }));
  set_short( "Hallway - x58y0z5" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y0z5.c",
  "east" : DIR+"/rooms/x59y0z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

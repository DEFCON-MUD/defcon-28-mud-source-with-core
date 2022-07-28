inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 19, 6 }));
  set_short( "Corridor - x55y19z6" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y20z6.c",
  "south" : DIR+"/rooms/x55y18z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

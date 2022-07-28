inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 4, 4 }));
  set_short( "Corridor - x18y4z4" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y4z4.c",
  "east" : DIR+"/rooms/x19y4z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

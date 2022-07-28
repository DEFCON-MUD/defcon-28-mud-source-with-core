inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 0, 9 }));
  set_short( "Corridor - x59y0z9" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y0z9.c",
  "east" : DIR+"/rooms/x60y0z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

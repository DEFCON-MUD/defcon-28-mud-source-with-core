inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 54, 2 }));
  set_short( "Hallway - x46y54z2" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y54z2.c",
  "east" : DIR+"/rooms/x47y54z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

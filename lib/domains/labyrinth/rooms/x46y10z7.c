inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 10, 7 }));
  set_short( "Hallway - x46y10z7" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y10z7.c",
  "east" : DIR+"/rooms/x47y10z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

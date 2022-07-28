inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 54, 7 }));
  set_short( "Passage - x36y54z7" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y54z7.c",
  "east" : DIR+"/rooms/x37y54z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 8, 7 }));
  set_short( "Corridor - x33y8z7" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y8z7.c",
  "south" : DIR+"/rooms/x33y7z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}

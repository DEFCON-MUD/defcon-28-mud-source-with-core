inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 24, 8 }));
  set_short( "Passage - x45y24z8" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y24z8.c",
  "north" : DIR+"/rooms/x45y25z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}

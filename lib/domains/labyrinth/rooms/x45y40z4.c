inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 40, 4 }));
  set_short( "Passage - x45y40z4" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y40z4.c",
  "north" : DIR+"/rooms/x45y41z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 24, 1 }));
  set_short( "Corridor - x46y24z1" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y24z1.c",
  "east" : DIR+"/rooms/x47y24z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 41, 6 }));
  set_short( "Corridor - x51y41z6" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y42z6.c",
  "south" : DIR+"/rooms/x51y40z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

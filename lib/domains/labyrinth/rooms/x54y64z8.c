inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 64, 8 }));
  set_short( "Corridor - x54y64z8" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y64z8.c",
  "east" : DIR+"/rooms/x55y64z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

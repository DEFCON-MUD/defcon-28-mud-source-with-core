inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 4, 9 }));
  set_short( "Hallway - x23y4z9" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y4z9.c",
  "south" : DIR+"/rooms/x23y3z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}

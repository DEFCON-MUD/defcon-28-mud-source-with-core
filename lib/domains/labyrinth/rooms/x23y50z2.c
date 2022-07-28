inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 50, 2 }));
  set_short( "Passage - x23y50z2" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y50z2.c",
  "south" : DIR+"/rooms/x23y49z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}

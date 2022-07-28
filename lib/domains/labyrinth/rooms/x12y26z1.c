inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 26, 1 }));
  set_short( "Passage - x12y26z1" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y26z1.c",
  "east" : DIR+"/rooms/x13y26z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

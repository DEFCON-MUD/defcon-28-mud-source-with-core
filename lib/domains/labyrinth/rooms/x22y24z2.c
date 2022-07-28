inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 24, 2 }));
  set_short( "Passage - x22y24z2" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y24z2.c",
  "east" : DIR+"/rooms/x23y24z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

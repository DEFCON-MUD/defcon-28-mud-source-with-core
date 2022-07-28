inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 0, 2 }));
  set_short( "Corridor - x33y0z2" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y0z2.c",
  "east" : DIR+"/rooms/x34y0z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

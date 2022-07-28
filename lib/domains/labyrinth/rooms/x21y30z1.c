inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 30, 1 }));
  set_short( "Hallway - x21y30z1" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y30z1.c",
  "east" : DIR+"/rooms/x22y30z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

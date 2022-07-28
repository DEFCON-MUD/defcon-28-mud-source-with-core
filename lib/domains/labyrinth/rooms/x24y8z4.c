inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 8, 4 }));
  set_short( "Hallway - x24y8z4" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y8z4.c",
  "east" : DIR+"/rooms/x25y8z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

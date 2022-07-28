inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 20, 5 }));
  set_short( "Corridor - x55y20z5" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y20z5.c",
  "east" : DIR+"/rooms/x56y20z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

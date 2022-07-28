inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 2, 7 }));
  set_short( "Corridor - x55y2z7" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y2z7.c",
  "east" : DIR+"/rooms/x56y2z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 40, 9 }));
  set_short( "Corridor - x14y40z9" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y40z9.c",
  "east" : DIR+"/rooms/x15y40z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

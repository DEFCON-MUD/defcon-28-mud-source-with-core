inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 28, 9 }));
  set_short( "Passage - x55y28z9" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y28z9.c",
  "east" : DIR+"/rooms/x56y28z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

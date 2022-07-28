inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 24, 8 }));
  set_short( "Hallway - x54y24z8" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y24z8.c",
  "east" : DIR+"/rooms/x55y24z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

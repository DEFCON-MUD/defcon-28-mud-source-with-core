inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 46, 6 }));
  set_short( "Hallway - x53y46z6" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y46z6.c",
  "east" : DIR+"/rooms/x54y46z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

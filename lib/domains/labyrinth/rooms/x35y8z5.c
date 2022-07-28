inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 8, 5 }));
  set_short( "Hallway - x35y8z5" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y8z5.c",
  "east" : DIR+"/rooms/x36y8z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

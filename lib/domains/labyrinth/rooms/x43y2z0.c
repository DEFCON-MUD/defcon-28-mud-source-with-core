inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 2, 0 }));
  set_short( "Corridor - x43y2z0" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y2z0.c",
  "east" : DIR+"/rooms/x44y2z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

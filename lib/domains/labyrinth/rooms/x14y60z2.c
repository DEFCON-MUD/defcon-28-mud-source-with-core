inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 60, 2 }));
  set_short( "Passage - x14y60z2" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y60z2.c",
  "east" : DIR+"/rooms/x15y60z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

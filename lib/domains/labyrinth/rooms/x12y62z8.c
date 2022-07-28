inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 62, 8 }));
  set_short( "Corridor - x12y62z8" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y62z8.c",
  "east" : DIR+"/rooms/x13y62z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

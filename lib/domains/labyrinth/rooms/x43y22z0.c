inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 22, 0 }));
  set_short( "Corridor - x43y22z0" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y22z0.c",
  "east" : DIR+"/rooms/x44y22z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

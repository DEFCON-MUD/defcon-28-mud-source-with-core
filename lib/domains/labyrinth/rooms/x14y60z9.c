inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 60, 9 }));
  set_short( "Corridor - x14y60z9" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y60z9.c",
  "east" : DIR+"/rooms/x15y60z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}

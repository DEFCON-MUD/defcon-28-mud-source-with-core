inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 9 }));
  set_short( "Hallway - x55y42z9" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y42z9.c",
  "south" : DIR+"/rooms/x55y41z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}

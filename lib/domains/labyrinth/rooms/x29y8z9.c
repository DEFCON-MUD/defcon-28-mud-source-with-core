inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 9 }));
  set_short( "Corridor - x29y8z9" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y8z9.c",
  "north" : DIR+"/rooms/x29y9z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 8, 8 }));
  set_short( "Hallway - x59y8z8" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y8z8.c",
  "north" : DIR+"/rooms/x59y9z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}

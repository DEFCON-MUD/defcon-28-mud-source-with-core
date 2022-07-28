inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 17, 2 }));
  set_short( "Corridor - x43y17z2" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y18z2.c",
  "south" : DIR+"/rooms/x43y16z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

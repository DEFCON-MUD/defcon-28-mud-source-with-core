inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 47, 9 }));
  set_short( "Hallway - x33y47z9" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y48z9.c",
  "south" : DIR+"/rooms/x33y46z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

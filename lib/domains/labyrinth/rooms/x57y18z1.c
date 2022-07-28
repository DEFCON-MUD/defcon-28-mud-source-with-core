inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 18, 1 }));
  set_short( "Hallway - x57y18z1" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y18z1.c",
  "south" : DIR+"/rooms/x57y17z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}

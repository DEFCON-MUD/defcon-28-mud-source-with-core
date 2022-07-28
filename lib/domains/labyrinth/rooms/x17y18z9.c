inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 18, 9 }));
  set_short( "Hallway - x17y18z9" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y19z9.c",
  "south" : DIR+"/rooms/x17y17z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

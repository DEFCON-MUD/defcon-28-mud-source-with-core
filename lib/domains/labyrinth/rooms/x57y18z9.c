inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 18, 9 }));
  set_short( "Passage - x57y18z9" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y19z9.c",
  "south" : DIR+"/rooms/x57y17z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

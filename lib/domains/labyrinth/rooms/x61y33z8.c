inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 33, 8 }));
  set_short( "Passage - x61y33z8" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y34z8.c",
  "south" : DIR+"/rooms/x61y32z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 33, 9 }));
  set_short( "Corridor - x61y33z9" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y34z9.c",
  "south" : DIR+"/rooms/x61y32z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

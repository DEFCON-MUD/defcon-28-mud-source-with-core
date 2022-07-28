inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 15, 9 }));
  set_short( "Corridor - x19y15z9" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y16z9.c",
  "south" : DIR+"/rooms/x19y14z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

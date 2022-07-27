inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 52, 4 }));
  set_short( "Passage - x7y52z4" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y52z4.c",
  "south" : DIR+"/rooms/x7y51z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}

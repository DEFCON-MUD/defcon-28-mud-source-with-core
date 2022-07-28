inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 45, 6 }));
  set_short( "Passage - x61y45z6" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y46z6.c",
  "south" : DIR+"/rooms/x61y44z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

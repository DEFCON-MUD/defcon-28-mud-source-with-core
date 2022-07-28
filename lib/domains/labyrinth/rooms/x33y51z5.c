inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 51, 5 }));
  set_short( "Passage - x33y51z5" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y52z5.c",
  "south" : DIR+"/rooms/x33y50z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

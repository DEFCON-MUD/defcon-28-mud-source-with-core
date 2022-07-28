inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 44, 9 }));
  set_short( "Hallway - x39y44z9" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y44z9.c",
  "east" : DIR+"/rooms/x40y44z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

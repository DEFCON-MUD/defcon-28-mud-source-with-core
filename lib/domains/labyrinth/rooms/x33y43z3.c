inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 43, 3 }));
  set_short( "Hallway - x33y43z3" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y44z3.c",
  "south" : DIR+"/rooms/x33y42z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

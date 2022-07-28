inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 43, 7 }));
  set_short( "Hallway - x27y43z7" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y44z7.c",
  "south" : DIR+"/rooms/x27y42z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

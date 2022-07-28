inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 59, 9 }));
  set_short( "Hallway - x51y59z9" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y60z9.c",
  "south" : DIR+"/rooms/x51y58z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 14, 8 }));
  set_short( "Passage - x39y14z8" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y14z8.c",
  "east" : DIR+"/rooms/x40y14z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

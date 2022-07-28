inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 12, 9 }));
  set_short( "Passage - x17y12z9" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y12z9.c",
  "north" : DIR+"/rooms/x17y13z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}

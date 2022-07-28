inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 56, 5 }));
  set_short( "Passage - x38y56z5" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y56z5.c",
  "east" : DIR+"/rooms/x39y56z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}

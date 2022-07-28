inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 46, 9 }));
  set_short( "Hallway - x17y46z9" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y47z9.c",
  "south" : DIR+"/rooms/x17y45z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}

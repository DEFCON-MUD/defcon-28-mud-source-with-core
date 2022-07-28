inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 54, 7 }));
  set_short( "Passage - x43y54z7" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y54z7.c",
  "east" : DIR+"/rooms/x44y54z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 54, 7 }));
  set_short( "Passage - x61y54z7" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y55z7.c",
  "south" : DIR+"/rooms/x61y53z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

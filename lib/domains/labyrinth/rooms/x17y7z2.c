inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 7, 2 }));
  set_short( "Passage - x17y7z2" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y8z2.c",
  "south" : DIR+"/rooms/x17y6z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

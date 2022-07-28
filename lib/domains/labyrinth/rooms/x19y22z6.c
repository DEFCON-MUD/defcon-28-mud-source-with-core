inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 22, 6 }));
  set_short( "Passage - x19y22z6" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y23z6.c",
  "south" : DIR+"/rooms/x19y21z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 52, 9 }));
  set_short( "Corridor - x43y52z9" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y53z9.c",
  "south" : DIR+"/rooms/x43y51z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}

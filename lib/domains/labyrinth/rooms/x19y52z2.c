inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 52, 2 }));
  set_short( "Passage - x19y52z2" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y53z2.c",
  "south" : DIR+"/rooms/x19y51z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}

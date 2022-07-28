inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 53, 4 }));
  set_short( "Passage - x53y53z4" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y54z4.c",
  "south" : DIR+"/rooms/x53y52z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
